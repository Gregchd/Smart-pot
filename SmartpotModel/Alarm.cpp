/**
 * Project Untitled
 */


#include "Alarm.h"

/**
 * Alarm implementation
 */

System::Alarm::Alarm(int id, String^ hour, String^ date, int id_plant)
{
	//throw gcnew System::NotImplementedException();
	this->Id = id; 
	this->Hour = hour;
	this->Date = date;
	this->Id_plant = id_plant;
}