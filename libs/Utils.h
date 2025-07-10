#include "CMakeProject1.h"// I WILL go over CMakeProject1.h libs and get rid of the ones I barely need there and distribute them
#include <utility> 
#include <cstdlib>
#include <memory>
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

template<typename T> void dijkstrasAlgo(T root, T target)
{ 
	// root at distance of the smallest.
	// map this out as is following the 
	// instructions
	// then use recursion in an if clause
	// then use the internet for an answer key
	// then optimise it for a 3D array
	int drnode = root.current;
	T next = new T();
	drnode = 1;
	/// add a check for target distance comparison for each existing edge.
	// any non visited nodes have the current distance 
	// 
	// what goes in the hole can zip up when using caution. But finees is key.
	// 
	while (root == true)
	{
		if (root.l)
		{
			drnode++;
		}
		if (root.r)
		{
			drnode++;
		}
		if (root.r > drnode) {
			current = root.r
		}
		if (root.l > drnode) {
			current = root.l
		}
	}
}