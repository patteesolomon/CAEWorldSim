// CÆ.cpp : Defines the entry point for the application.
//
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <iomanip>
#include "CÆ.h"  
#include <nlohmann/json.hpp>
#include "libs/UFI.h"
// for convenience
using json = nlohmann::json; 
void loadIn() {
     // a JSON text given as std::vector
        auto textf = R"({
            "Image": {
                "Width":  800,
                "Height": 600,
                "Title":  "View from 15th Floor",
                "Thumbnail": {
                    "Url":    "http://www.example.com/image/481989943",
                    "Height": 125,
                    "Width":  100
                },
                "Animated" : false,
                "IDs": [116, 943, 234, 38793]
            }
        })";
        std::ifstream file("this.json");
        nlohmann::json jsonData;
        // parse and serialize JSON 
        try {
            //json j_complete = json::parse(textf); 
            file >> jsonData;
            std::cout << "objectData: " << jsonData["object"] << "\n";
        }
        catch(const json::parse_error& e){
            std::cout << e.what() << std::endl;
        } 
        json j = json::parse(file, nullptr, false);
        if (j.is_discarded())
        {
            std::cout << "the input is invalid JSON" << std::endl;
        }
        else
        {
            std::cout << "the input is valid JSON: " << j << std::endl;
        }
        std::cout << std::setw(4) << j << "\n\n";
}
int main()
{ 
    UFI ie = UFI();
    ie.generateResponce();
	return 0;
}
