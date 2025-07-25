#pragma once
#include "CMakeProject1.h"
#include "Utils.h"
#include "../libs/yamlBuild/yaml-cppd.lib" // time to ref this the oldschool way
#include <fstream>
#include <sstream>
using namespace std;

/////
// updaterFromInstance
// these will mostly be
// the templates from a filebase
// https://towardsdatascience.com/scraping-reddit-data-1c0af3040768/ < - use this to pipleine an Entity Gen
//  and maybe music and images too
//  use an ai gen for images if you're able to
// 

// I only need one of these
// a Singleton
class UFI {
private:
	static UFI* instance;
	UFI(); // Private constructor
public:
	static UFI* getInstance() {
		if (!instance) {
			instance = new UFI();
		}
		return instance;
	}

	// reader and writer 
	fstream file("Database.csv");

	// loaders
	void loadFB(); // FB = Filebase
	void loadDataBase(); // loads the ingame database
	void loadGame(); // loads all of your saved progress and ONLY everything it needs based on this memory context
	// takes the game data from the game state as is. 
	vector<istream> getGameData(/*containers here*/); 

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
	
	// savers 
	void gameSave(vector<istream>);
	void saveEntities();
	void saveArchs();
	void saveOrgData(); 

	// declarations
	void UFI::gameSave(vector<istream> argv) {
		fstream file;
		int xcells = 0;
		int ycells = 0; 
		int yin = 0;

		if (!file || !file.is_open()) {
			cout << "error opening game file" << endl;
		} 
		// writing out to the file 
		file.open("GameData.csv", ios_base::in | ios_base::out | ios_base::app | ios_base::trunc);
		cout << "Saving Game" << endl;
		// writing out to file // we gotta sort this one better
		xcells = argv.capacity;
		// for every 5 cells we make a new line
		// ill optimize this later
		for (int i = 0; xcells > i; i++) {
			file << i << ' :' << ' ' << argv.at(i) << ", ";
			yin++;
			if (yin >= 4)
			{
				ycells++;
				file << argv(i) << endl;
				yin = 0;
			}
		}
		// when you're done 
		file.close();
	}

	void UFI::loadFB() {
	} 

	void UFI::loadDataBase() {

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

	~UFI();
};