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


	// savers 
	void gameSave();
	void saveEntities();
	void saveArchs();
	void saveOrgData(); 
	void saveResponce();
	~UFI();
};