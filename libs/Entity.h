#pragma once
#include "Utils.h"
#include "CMakeProject1.h"  
#include <tuple>
using namespace std;

class Entity {
private:
#pragma region playerRequirements
// These are all structs or props
// name, 
// inventory,
// dialogue,
// playerstats,
// skills (attacking with lesser force using ST),
// STs (special made from attacking),
// magic (mana/item expenditure),
// psionics (weights system),
// terrainMod,
// actionMod,
// mapAndNav,
// menuAndCurrencies ///
#define stats [];

string name = "";

#define skills[];

#define sts[];

#define magic[];

#define psionics[];

#pragma endregion

#pragma region enemyReqs
////spawn area
// area type
//
int statb[15] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};
// copy inv over to statb
#pragma endregion

// These items need to be made via an api upon update.
// we'll have some defaults tho
#pragma region item 
struct Item
{
	string name = "";
	int quantity = 0;
	int statbC[]; // the amount of ints that change the statbase
};
Item inventory[10] = {};
#pragma endregion

/// you get to pick one and you can't change it /// 
#pragma region Faction
enum class Faction {
	NONE, // your team at the start
	AdminLord, // Badguys with god powers
	Dygana, // Same evil digital natives 
	Uyun,  // Uyu = Uyun -> digital natives that fought the Dygana
	Byzora, // A human (mostly europeans), alien hybrid interstellar faction
	Triad,  // TRIAD INFINITY -> the US. metaHumans/Spirits
	Nijima, // Nijin = Nijima -> asians and everyone who hates the US
	Kagari, // Kigare = Kagari -> Hikana and Human ninjas 
	Aegesa, // more baddies from the old world -> The first android/cyborg digital natives
	Shanar // humans/Tulpas with cosmic powers
};
int allyId = 0;
#pragma endregion
Faction aFt; // to change this you'd have to
// re inst your object which isn't that hard 
// plus that's better for the stat change 
// factions give perks

// events that trigger the update system 
// changing the world around you
// theres a data sheet for all the defaults
#pragma region EventType
enum class EventType {
	ACTION, // you make this happen
	UPDATE, // when things effect certain aspects of the world
	COMBAT,
	DIALOGUE, 
	ACTOR // specific character entities 
};
#pragma endregion

// this is for responces that are formed from an input based system
// story dialouge for events and others are in a yaml, a csv
// and a data set for Eventypes invokable 
// a gpt queue
#pragma region ResponceQueue

#pragma endregion

#pragma region 
#pragma endregion

#pragma region org

#pragma endregion

#pragma region ObjectInteractable

#pragma endregion

#pragma region NCNPC

#pragma endregion

#pragma region TerrainSpace

#pragma endregion 

#pragma region Menu

#pragma endregion 
	std::tuple<int, Faction> allegiance;
	///
	/// // is this a player
	bool isPlayer = false;

	char pDid; // unique name and index finder for .yamlfiles
	// a unique id set
		// if it matches yours or your faction's 
		// this is an ally 
public: 
	enum class elementType
	{
		Water = 0,
		Fire = 1,
		Earth = 2,
		Air = 3,
		Lightning = 4,
		Phase = 5,
		Life = 6,
		Light = 7,
		Dark = 8,
		Normal = 9
	};
	// not every unit type is going to be a combattant
	// but they'll be important for controlling certian territories
	enum class unitType {
		ATYPE,
		INTEGRITY,
		COMBATTANTI,
		COMBATTANTII,
		COMBATTANTIII,
		DESTROYER,
		RECON,
		ARCHIVER,
		SUPPORT,
		COMMANDER,
		HACKER,
		MERCHANT,
		LABORER,
		CLERIC,
		REPLICANT,
		PSIONIC,
		AGENT
	};

	void setStbv(int val, int i) {
		this->statb[i] = val;
	};
	Entity();
	Entity(int allyIdSet, Faction type);

	
	~Entity();
};
