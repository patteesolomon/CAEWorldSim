#include "./CMakeProject1.h"

using namespace std;

class WorldGen {
private:
	
	int maxGen;
	int minGen;
	int z;
	int x;
	int y; 
	vector<int> wm;
	
public:  
	enum class Enx : unsigned short int {
		AEGESAN,
		HUMAN,
		REVERSE,
		WILDLIFE,
		ROBOTIC,
		HYBRID,
		HACKER,
		MONSTER,
		NPC,
		DEFAULT
	};
	// event nested index type
	// this is for all the events that 
	// are selected within the archetype array

	Enx enxType = Enx(9);

 	// world map
	WorldGen();

	void resizeMap() {
		// resize
		this->x,y = rand() % 50 + 1;
		this->z = rand() % 10 + 1; 
		this->wm = { this->x, this->y, this->z };
		// drawing comes now
	}
	// im not reusing this function as much and its neater like this.
	void reSizeS(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
		this->wm = { this->x, this->y, this->z };
	}
	void drawMap() {

	}
	~WorldGen();
};