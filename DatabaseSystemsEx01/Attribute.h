#pragma once
#include <string>
#include "Constants.h"

using namespace std;

class Attribute {
private:
	string name;
	string type;

	void setAttributeProperties(string attributeStr);

public:
	Attribute(string attributeStr);
	string getName();
	string getType();
};
