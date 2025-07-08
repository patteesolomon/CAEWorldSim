#include "./CMakeProject1.h"

class StatBaceInit
{
private: 
	

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
	StatBaceInit();
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
	int statbase[14] = {

	};
	~StatBaceInit();

};

StatBaceInit::StatBaceInit()
{
}

StatBaceInit::~StatBaceInit()
{
}
