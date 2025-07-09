#pragma once
#include "Utils.h"
#include "CMakeProject1.h"  

using namespace std;

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
 
#pragma endregion

#pragma region enemyReqs
////spawn area
// area type
// 
#pragma endregion

#pragma region item

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

class Entity{
private: 
	
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

		// statbase 16
	unsigned int statbase[15] = {  
		0, // health  
		0, // special  
		0, // fighter (aural) 
		0, // abiliy (optained after every level) (you'll also obtain -ap- from special items, Bosses and TurnA clashes) f
		0, // dynamic points (obtained after a Turn A clash for leveling) 

		// battler statbase <- ap goes here
		0, // attack 
		0, // defence (armor based)
		0, // speed  

		// ability stats <- dp goes here
		0, // agility
		0, // dexterity
		0, // intelligence
		0, // spirit
		0, // strength (also effects status)
		0, // endurance (bodily based / also effects status)
		0 // constitution (mental, body, soul, based / also effects status)
	};
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
		Bio = 6,
		Light = 7,
		Dark = 8,
		Normal = 9
	};

	enum class unitType {

	};
#define stats [];

#define inventory []; 

#define name = "";

#define skills = [];

#define sts = [];

#define magic = [];

#define psionics = [];
	 
};