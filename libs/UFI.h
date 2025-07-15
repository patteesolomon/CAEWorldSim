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
	void gameSave();
	void saveEntities();
	void saveArchs();
	void saveOrgData(); 

	// declarations
	void UFI::loadGame() {

		/*ifstream file("");
		if (!file) {

		}*/
	}

	void UFI::loadFB() {
	} 

	void UFI::loadDataBase() {
	}

	void UFI::gameSave() {

	}

	~UFI();
};