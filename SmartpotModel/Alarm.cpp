/**
 * Project Untitled
 */


#include "Alarm.h"

/**
 * Alarm implementation
 */

System::Alarm::Alarm(int id, String^ hour, String^ date)
{
	//throw gcnew System::NotImplementedException();
	this->Id = id; 
	this->Hour = hour;
	this->Date = date;
}