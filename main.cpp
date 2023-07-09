#include <iostream>

#include "UserSelection.h" // interface according to selected user

int main(int argc, char* argv)
{
	bool quit{ false }; // program quit flag

	while (!quit) // main loop
	{
		int userType; // 1 for ADMIN 2 for CUSTOMER
		std::cout << "1 - ADMIN\n";
		std::cout << "2 - CUSTOMER\n";
		std::cout << "Enter Choice: ";
		std::cin >> userType;

		system("cls");

		UserSelection selectedUser(userType);

	}

	return 0;
}