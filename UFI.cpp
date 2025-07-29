#include "libs/UFI.h"
#include <jsoncpp_x64-windows/include/json/writer.h>
#include <jsoncpp_x64-windows/include/json/reader.h> 
	//TODO: remove alot of this chaos.
	/// and add functions we need to load json, csv and yaml files
using namespace Json;
// declarations

// this is unfinished.. TODO:leave this till you get all the data and test this.
void UFI::gameSave() {
	vector<istream> argv;
	int xcells = 0;
	int ycells = 0;
	int yin = 0;
	// reader and writer 
	fstream fss("Database.csv", ios::in | ios::out | ios::app | ios::trunc);
	fstream fs("GameData.csv", ios_base::in | ios_base::out | ios_base::app | ios_base::trunc);
	if (!fss || !fss.is_open()) {
		cout << "error opening game file" << endl;
	}
	// writing out to the file 
	cout << "Saving Game" << endl;
	// writing out to file // we gotta sort this one better
	xcells = static_cast<int>(argv.capacity());
	// for every 5 cells we make a new line
	// ill optimize this later
	//int l[xcells];
	for (int i = 0; xcells > i; i++) {
		//auto& l[i] = argv[i];
		//fss << i << ' :' << ' ' <<  << ", ";
		yin++;
		if (yin >= 4)
		{
			ycells++;
			//fss << argv(i) << endl;
			yin = 0;
		}
	}
	// when you're done 
	fss.close();
}

UFI::UFI()
{
}

void UFI::loadGame() { 

	/// enum for the different parts of the row goes here..
	///*
	/// asserting values to the game data game object
	/// the game location and values are sent to an array sent via a switch 
	/// functions will trigger off*///
}

//TODO: TEST THIS
void UFI::saveResponce() { 
	// 
	std::ofstream file("Database.csv");
	std::ifstream res_data("this.json"); // response data 
	Json::Reader read;
	Json::Value obj;
	ostringstream s;

	read.parse(res_data, obj);
	// store this to csv
	Value value = obj;
	StreamWriterBuilder builder; 
	builder["new line"] = "\n";
	std::unique_ptr<Json::StreamWriter> writer(
		builder.newStreamWriter());

	writer->write(value, &std::cout);

	s << &std::cout;
	std::cout << endl;
	string exportr = s.str();
	file << exportr; // responce saved
}
 