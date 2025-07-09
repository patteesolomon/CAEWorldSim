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
// UFI, Entity(TerrainObjs, Actor(Player/Npc either foe or friend character), Enemy(baddie npc), Ally(friend npc not in party)UnitType), Org(Factions, player organization menu, Communication), Events
//  |
// \/
// WorldGen, GameTemp
// 
// 
////

#define valueUpdater;

#define statDupe[];

#define gameStart = 0;

#define gameLoad = 0;

template<typename T> void test(T a) {
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
	int i = 0;
	for (T sa : arr)
	{
		arrIII[i] = sa;
		i++;
	};

	for (T sa : arrII)
	{
		arrIII[i] = sa;
		i++;
	};
}

template<typename T> int capacityCount(T arr[])
{
	int count = 0;
	for (T var : arr)
	{
		++count;
	}
	return count;
} 

template<typename T> void dijkstrasAlgo(T root, T next, T arr[])
{ 
	// root at distance of 0
	// map this out as is following the 
	// instructions
	// then use recursion in an if clause
	// then use the internet for an answer key
	// then optimise it for a 3D array
	int drnode = 0;
	
}