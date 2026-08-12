#pragma once
using namespace std;
#include <string>
#include <iostream>
class display
{
public:
	static void minimenu() {
		cout << "student 1 " << "\n";
		cout << "professor 2 " << "\n";
		cout << "adminstritor 3 " << "\n";
		cout << "all 4 " << "\n";
	}
	static void minimenu2() {
		cout << "student 1 " << "\n";
		cout << "professor 2 " << "\n";
		cout << "adminstritor 3 " << "\n";
	}
	static void menu() {
		cout << "to add 1 " << "\n";
		cout << "to show accounts 2 " << "\n";
		cout << "to search  3 " << "\n";
		cout << "to edit 4 " << "\n";
 		cout << "to delete  5 " << "\n";
		cout << "to exit 6 " << "\n";
	}
	 static void showAccountAdded()
	{
		cout << "Account Added Successfully" << "\n";
	}
	static void showAccountDeleted()
	{
		cout << "Account Deleted Successfully" << "\n";
	}
	static void showAccountNotFound()
	{
		cout << "Account not found" << "\n";
	}
	static void showAccountedited()
	{
		cout << "Account edited Successfully" << "\n";
	}
	static void showenterMessage() {
		cout << "enter the id : " << "\n";
	}
	static void showAccountNotFound2()
	{
		cout << "Accounts not found" << "\n";
	}
	
};

