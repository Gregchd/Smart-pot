/**
 * Project Untitled
 */


#include "User.h"

/**
 * User implementation
 */
System::User::User(int id, String^ username, String^ password, String^ email)
{
	//throw gcnew System::NotImplementedException();
	this->Id = id;
	this->Username = username;
	this->Password = password;
	this->Email = email;
}