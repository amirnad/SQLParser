#include "Attribute.h"

Attribute::Attribute(string attributeStr)
{
	setAttributeProperties(attributeStr);
}

void Attribute::setAttributeProperties(string attributeStr)
{
	size_t seperator = attributeStr.find(colon);
	name = attributeStr.substr(0, seperator);
	attributeStr = attributeStr.substr(seperator + 1);
	type = attributeStr;
}


string Attribute::getName()
{
	return name;
}

string Attribute::getType()
{
	return type;
}