#pragma once
#include "CMakeProject1.h"
#include "Utils.h"
#include <fstream>
#include <sstream>
using namespace std;

/////
// updaterFromInstance
// these will mostly be
// the templates from a filebase
// 

//// I only need one of these

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
	void loadGame();

	// update chunk
	void updateMapCluster();
	void updateSector();

	// updaters
	void updateFB(); // file paths and config 
	void updateEntity();
	void updateEntities();
	void updateArchDatabase(); // tables for the archetypes are different
	void updateEntityDatabase();
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
			file << argv.at(i) << ", ";
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

	}

	~UFI();
};