#include "UserSelection.h"
#include <iostream>

UserSelection::UserSelection()
{
	selectedUser = 0;
}

UserSelection::UserSelection(int userType)
{
	selectedUser = userType;
}

void UserSelection::welcome()
{
	std::cout << "Welcome as " << (selectedUser == 1 ? "Admin" : "Customer") << std::endl;
}

bool UserSelection::primaryAction()
{
	// according to selectedUser
	// if admin then admin actions
	// if customer then customer actions
}