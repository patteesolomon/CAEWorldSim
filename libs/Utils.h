#include "CMakeProject1.h"

//
// use a closed hashmap when loading game data?
// or something else
// //
////
// // and here I will model out the 
// class hierarchy of inheritance
// Utils.h, EventUtils.h, TriggerList.h
// \/
// UFI, Entity, Org(Factions, player organization menu, Communication), Events
//  |
// \/
// WorldGen, Actor(Player/Npc either foe or friend character), Enemy(baddie npc), Ally(friend npc not in party), GameTemp, UnitType, 
// 
// 
////

#define valueUpdater;

#define statDupe[];

#define gameStart = 0;

#define gameLoad = 0;

template<typename T> void addEntity(T a) {
	switch (a)
	{
	default:
		std::cout << "hi" << std::endl;
		break;
	}
}

/// <summary>
/// arr gets arrII added to it right from the end.
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="arr"></param>
/// <param name="arrII"></param>
template<typename T> void concatToList(T arr[], T arrII[])
{
	int newcount = capacityCount(arr) + capacityCount(arrII);
	T arrIII[newcount]{}; 
	for each(T sa in arr)
	{
		arrIII[sa]; 
	}

	for each(T sa in arrII)
	{
		arrIII[sa];
	}
}

template<typename T> int capacityCount(T arr[])
{
	int count = 0;
	for each(T var in arr)
	{
		++count;
	}
	return count;
}