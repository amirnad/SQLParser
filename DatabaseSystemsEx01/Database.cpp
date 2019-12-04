#include "Database.h"

Database::Database(string fileName)
{
	createDatabase(fileName);
}

void Database::createDatabase(string fileName)
{
	ifstream fd("scheme.txt");
	string tblLine;
	while (getline(fd, tblLine))
	{
		tables.push_back(new Table(tblLine));
	}

	fd.close();
}