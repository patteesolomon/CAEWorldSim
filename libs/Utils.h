#include "CMakeProject1.h"// TODO: I WILL go over CMakeProject1.h libs and get rid of the ones I barely need there and distribute them
#include <utility>
#include <cstdlib>
#include <memory>
using namespace std;
//
// use a closed hashmap when loading game data?
// or something else
// //
////
// // and here I will model out the
// class hierarchy of inheritance
// Utils.h, EventUtils.h, TriggerList.h, FILEBASELOADER,
// \/
// UFI
// \/
// Entity(TerrainObj or base Class)
// | (containing the integral structs)
// Enemy(baddie npc), Ally(friend npc not in party)UnitType), Actor(Player/Npc either foe or friend character)
// \/
// Org(Factions, player organization menu, Communication), Events
// \/
// WorldGen, GameTemp
//
//
////

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

#define statDupe[];
#define gameLoad = 0; 

template<typename T> T valueUpdater(T val1[], T val2[]) {
	
};

// this sorts your list from least to greatest
template<typename T> T turnSort(vector<int> vals)
{ 
	sort(vals.begin(), vals.end());
	return vals;
} 

unsigned int gameStart = 0; 

bool getGameStart = (static_cast<int>(gameStart) >= 1) || false;
void setGameStart(uint16_t e) {
	gameStart = (e > 0) || false;
}

template <bool _Test, class _Ty = void>
struct enable_if {}; // no member "type" when !_Test

//template <class _Ty>
//struct enable_if<true, _Ty>{ // type is _Ty for _Test
//	using type = _Ty;
//
//	enable_if() = default;
//
//	bool operator==(const enable_if& other) const
//	{
//		return false;
//	}
//};

//template <bool _Test, class _Ty = void>
//using enable_if_t = typename enable_if <_Test, _Ty>::type;
//

/// <summary>
/// arr gets arrII added to it right from the end.
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="arr"></param>
/// <param name="arrII"></param>
template<typename T>T concatToArray(T arr[], T arrII[])
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
	return arrIII;
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

template<typename T> struct IsFloatOrDouble
{
	
};

template<> struct IsFloatOrDouble<float>
{
	using type = void;
};

template<> struct IsFloatOrDouble<double>
{
	using type = void;
};

template<class T, class U = typename IsFloatOrDouble<T>::type>
T getAvgArea(T r)
{
	return r * r * 3.1415928;
};

template<class T>
class Base
{
};
class Derived : public Base<class T>
{
	/*void callGCEFC(integer_sequence<int, Is...>,
	EntityData &entityData, vector<CEntry> &ret, glm::dvec3 position,
	glm::vec3 collider, uint64_t eidToIgnore)
	{
		(genericCheckEntitiesForColisions(*entityData.template entityGetter<Is+1>(),
	ret, position, collider, eidToIgnore), ...);*/

};

template<typename... Values> class tuple {}; // takes zero or more arguments

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
		auto current = root.current;
		if (root.l)
		{
			drnode++;
			if (root.r > drnode) {
				current = root.r;
			}
		}
		if (root.r)
		{
			drnode++;
			if (root.l > drnode) {
				current = root.l;
			}
		}
	}
}

template<typename T> void eraseElement(vector<int>vec, int q) {
	if (empty(vec)) { vec = { 2, 53, 6, 6 }; }; // loading example
	vec.erase(
		remove_if(vec.begin(), vec.end(), q <= 0),
		vec.end());
}
