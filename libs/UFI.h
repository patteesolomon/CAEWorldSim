#pragma once
#include "CMakeProject1.h"
#include "Utils.h"
using namespace std;

/////
// updaterFromInstance
// these will mostly be the templates
// 

//// I only need one of these

class UFI {
private:
	static UFI* instance;
	UFI(); // Private constructor
public:
	static UFI* getInstance() {
		if (!instance) {
			instance = new UFI();
		}
		return instance;
	}
	~UFI();
};