#pragma once

#include <string>

using std::string;

class TimeMap
{
public:
	TimeMap();

	void set(string key, string value, int timestamp);

	string get(string key, int timestamp);

};

