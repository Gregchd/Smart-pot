/**
 * Project Untitled
 */


#include "Plant.h"

/**
 * Plant implementation
 */

System::Plant::Plant(int id, String^ type, String^ name)
{
	//throw gcnew System::NotImplementedException();
	this->Id = id;
	this->Name = name;
	this->Type = type;
}
