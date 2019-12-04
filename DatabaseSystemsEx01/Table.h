#pragma once
#include <string>
#include <list>
#include "Attribute.h"
#include "Constants.h"

using namespace std;

class Table {
private:
	string name;
	int numberOfAttributes;
	list<Attribute*> attributeList;

	void createTable(string tableStr);

public:
	Table(string tableStr);
	string getName();

};