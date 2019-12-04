#pragma once
#include <fstream>
#include "Table.h"

class Database
{
private:
	list<Table*> tables;

	void createDatabase(string fileName);

public:
	Database(string fileName);

};