#include "CMakeProject1.h"// I WILL go over CMakeProject1.h libs and get rid of the ones I barely need there and distribute them
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
// Utils.h,/ EventUtils.h, /TriggerList.h
// \/
// UFI,/ Entity(TerrainObjs, Actor(Player/Npc either foe or friend character), Enemy(baddie npc), Ally(friend npc not in party)UnitType), / Org(Factions, player organization menu, Communication), Events
//  |
// \/
// WorldGen,/ GameTemp
//
//
////

template<typename T> T valueUpdater(T val1[], T val2[]) {

};

template<typename T> T turnSort(vector<int> vals)
{
	vector<int> last = 0;
	sort(vals.assign(last), vals.begin(), vals.end(), last < vals);// find a way to add last no comparison
}

#define statDupe[];

auto gameStart = 0;

#define gameLoad = 0; 

bool getGameStart = (static_cast<int>(gameStart) >= 1) || false;
void setGameStart(auto e) {
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
//using enable_if_t = typename enable_if<_Test, _Ty>::type;
//
//template<typename T> void test(T a) {
//	switch (a)
//	{
//	default:
//		std::cout << "hi" << std::endl;
//		break;
//	}
//} 

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
	vec = { 2, 53, 6, 6 };
	vec.erase(
		remove_if(vec.begin(), vec.end(), q <= 0),
		vec.end());
}
