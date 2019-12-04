#include "Table.h"


Table::Table(string tableStr)
{
	createTable(tableStr);
}

// TableName(atr1:type1, atr2:type2, atr3:type3,... ,atrn:typen)
void Table::createTable(string tableStr)
{
	size_t nameEndPos = tableStr.find(openingBrackets);
	name = tableStr.substr(0, nameEndPos);
	tableStr = tableStr.substr(nameEndPos + 1);

	bool haveAttributes = true;
	while (haveAttributes)
	{
		size_t attributeEndPos = tableStr.find(comma);
		if (attributeEndPos == string::npos)
		{
			haveAttributes = false;
			attributeEndPos = tableStr.find(closingBrackets);
		}
		string attribute = tableStr.substr(0, attributeEndPos);
		attributeList.push_back(new Attribute(attribute));

		if (haveAttributes)
		{
			tableStr = tableStr.substr(attributeEndPos + 2);
		}

	}
	numberOfAttributes = attributeList.size();

}

string Table::getName()
{
	return name;
}