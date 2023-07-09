#pragma once
class UserSelection
{
public:
	UserSelection(); // constructor
	UserSelection(int userType); // insert userType for default behaviour

	// displays welcome screen and main menu (selections)
	void welcome();

	// primary action to welcome
	// admin validation
	// customer login / account creation

	// false if exit == true;
	bool primaryAction();
private:
	int selectedUser; // type of user
};