#pragma once
#include "CMakeProject1.h"
#include "Utils.h"
//#include "../libs/yamlBuild/yaml-cppd.lib" // vkpkg this one or find another way
#include <fstream>
#include <sstream>
#include <C:\Users\TheSh\OneDrive\Documents\CÆ\CÆ\vcpkg_installed\vcpkg\pkgs\cjson_x64-windows\include\cjson\cJSON.h> 
#include <nlohmann/json.hpp> // reading and validation, creation 
using namespace std;

/////
// updaterFromInstance
// these will mostly be
// the templates from a filebase
// https://towardsdatascience.com/scraping-reddit-data-1c0af3040768/ < - use this to pipleine an Entity Gen
//  and maybe music and images too
//  use an ai gen for images if you're able to
// 
 
class UFI {
private:
	
public:
	

	static UFI* instance;
	UFI();
	static UFI* getInstance() {
		if (!instance) {
			instance = new UFI();
		}
		return instance;
	}
	
	// loaders
	void loadFB(); // FB = Filebase
	void loadDataBase(); // loads the ingame database
	void loadGame(); // loads all of your saved progress and ONLY everything it needs based on this memory context
	// takes the game data from the game state as is. 
	void getGameData(/*containers here*/);

	// update chunk (only when player moves anywhere or event change)
	void updateMapCluster(); // a larger version of the function below
	void updateSector(); // certian updaters are used here, event change and more

	// updaters
	void updateFB(); // file paths and config 
	void updateEntity(); // specific Entity update
	void updateEntities(); // Entities 
	void updateArchDatabase(); // tables for the archetypes are different
	void updateEntityDatabase(); // updater for Any other Entity
	void updateOrgDatabase(); // tables for the archetypes are different
	void updateGameData(); // your unique save file for getting all the data specific to it
	
	// generation
	void generateResponce();

	// savers 
	void gameSave(vector<istream> argv);
	void saveEntities();
	void saveArchs();
	void saveOrgData(); 

	// declarations
	void UFI::gameSave(vector<istream> argv) {
		int xcells = 0;
		int ycells = 0; 
		int yin = 0;
		// reader and writer 
		fstream fss("Database.csv", ios::in | ios::out | ios::app | ios::trunc);
		fstream fs("GameData.csv", ios_base::in | ios_base::out | ios_base::app | ios_base::trunc);
		if (!this.fss || !fss.is_open()) {
			cout << "error opening game file" << endl;
		} 
		// writing out to the file 
		cout << "Saving Game" << endl;
		// writing out to file // we gotta sort this one better
		xcells = argv.capacity;
		// for every 5 cells we make a new line
		// ill optimize this later
		for (int i = 0; xcells > i; i++) {
			fss << i << ' :' << ' ' << argv.at(i) << ", ";
			yin++;
			if (yin >= 4)
			{
				ycells++;
				fss << argv(i) << endl;
				yin = 0;
			}
		}
		// when you're done 
		fss.close();
	}

	UFI::UFI()
	{
	}

	void UFI::loadGame() {
		fstream j;
		int fileElements = 0;
		j.open("GameData.csv", ios_base::in | ios_base::out | ios_base::app | ios_base::trunc);
		auto &l = j.read();

		/// enum for the different parts of the row goes here..
		///*
		/// asserting values to the game data game object
		/// the game location and values are sent to an array sent via a switch 
		/// functions will trigger off*///
	}
	 
	void UFI::generateResponce() {
		std::ifstream game_data("this.json", std::ifstream::binary);
		Json::Value gdata;
		game_data >> gdata;
		cout << this.gdata;
		// store this somewhere
	}


	~UFI();
};