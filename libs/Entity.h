#pragma once
#include "Utils.h"
#include "CMakeProject1.h"  

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

#pragma region item
struct Item
{
	string name = "";
	int quantity = 0;
	int statbC[]; // the amount of ints that change the statbase

};
Item inventory[10] = {};
#pragma endregion

#pragma region org

#pragma endregion

#pragma region ObjectInteractable

#pragma endregion

#pragma region NCNPC

#pragma endregion

#pragma region TerrainSpace

#pragma endregion

#pragma region Ally

#pragma endregion

#pragma region Menu

#pragma endregion

#pragma region Faction

#pragma endregion 

#pragma region EventType

#pragma endregion

#pragma region ResponceQueue

#pragma endregion 
	
	/// <summary>
	/// a statBase array that is accessed
	/// and we use getters and setters 
	/// for what we need.. just put that here
	/// and add status effects with Hash/Map/Heap/Array/Stack/Queue
	/// template functions:
	/// 
	/// Hash is for embedding effects with lock and key
	/// maping is for mapping things our for selection
	/// Heap is for finding parts of funciton and vars to be used later
	/// Stack is for fifo updates and pulling from the heap
	/// Queue is for popping off Statuses using updates
	/// 
	/// </summary>
	/// 
	/// // is this a player
	bool isPlayer = false;

	char pDid; // unique name and index finder for .yamlfiles
	
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
	~Entity();
};