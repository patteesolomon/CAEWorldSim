#include "crow_all.h"
#include <vector>
#include <string>

struct User {
    int id;
    std::string name;
};

std::vector<User> users = { {1, "Alice"} };

int main() {
    crow::SimpleApp app;

    // READ
    CROW_ROUTE(app, "/api/users").methods("GET"_method)([](){
        crow::json::wvalue result;
        result["users"] = crow::json::list();
        for (auto& u : users) {
            crow::json::wvalue user;
            user["id"] = u.id;
            user["name"] = u.name;
            result["users"].push_back(user);
        }
        return result;
    });

    // CREATE
    CROW_ROUTE(app, "/api/users").methods("POST"_method)([](const crow::request& req){
        auto body = crow::json::load(req.body);
        if (!body) return crow::response(400);
        User u{ (int)time(nullptr), body["name"].s() };
        users.push_back(u);
        return crow::response(201, body.dump());
    });

    // UPDATE
    CROW_ROUTE(app, "/api/users/<int>").methods("PUT"_method)([](int id, const crow::request& req){
        auto body = crow::json::load(req.body);
        for (auto& u : users) {
            if (u.id == id) {
                u.name = body["name"].s();
                return crow::response(200, body.dump());
            }
        }
        return crow::response(404);
    });

    // DELETE
    CROW_ROUTE(app, "/api/users/<int>").methods("DELETE"_method)([](int id){
        users.erase(std::remove_if(users.begin(), users.end(),
            [id](User& u){ return u.id == id; }), users.end());
        return crow::response(200, "Deleted");
    });

    app.port(3000).multithreaded().run();
}
