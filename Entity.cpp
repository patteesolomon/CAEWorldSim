#include "./libs/Entity.h"

using namespace std;
// basic constructor for objects
Entity::Entity() {

}

Entity::Entity(int allyIdSet, Faction type) {
	this->allegiance = make_tuple(allyIdSet, type);

}