#pragma once
using namespace std;
#include <string>
#include <iostream>
#include "Person.h"
#include "student.h"
#include "Administrator.h"
#include "Professor.h"
#include "display.h"
class univirsity
{
private:
	Person* persons[300];
	int count = 0;
public:
	void start() {

		int choice;
		do {
			display::menu();
			cin >> choice;
			switch (choice) {
			case 1:
				display::minimenu2();
				add();
				break;
			case 2:
				display::minimenu();
				show();
				break;
			case 3:
				display::minimenu2();
				search();
				break;
			case 4:
				display::minimenu2();
				edit();
 				break;
			case 5:
				display::minimenu2();
				delet();
 				break;
			case 6:
				break;
			}

		} while (choice != 6);
	
	}
	
	void add() {

		int choice;
		cin >> choice;
		if (count >= 300) {
			cout << "Cannot add more accounts. The system is full.\n";
			return;
		}
		switch (choice) {
		case 1:
		  persons[count]= new student();
			break;
		case 2 :
			persons[count]= new Professor();
			break;
		case 3:
		 persons[count]=new Administrator();
		 break;
		default:
			cout << "Invalid choice\n";
			return;
		}
		persons[count]->ReadData();
		display::showAccountAdded();
		count++;
	}
	void show() {
		int choice;
		bool found = false;
		cin >> choice;
		if (count == 0) {
			display::showAccountNotFound2();
			return;
		}
		switch (choice) {
		case 1:
			for (int i = 0; i < count ; i++) {
				if (persons[i]->getType() == "student") {
					persons[i]->printdata();
					found = true;
				}
 			}
			break;

		case 2:
			for (int i = 0; i < count; i++) {
				if (persons[i]->getType() == "professor") {
					persons[i]->printdata();
					found = true;
				}
			}
			break;
		case 3 :
			for (int i = 0; i < count; i++) {
				if (persons[i]->getType() == "Administrator") {
					persons[i]->printdata();
					found = true;
				}
 			}
			break;
		case 4: 
				for (int i = 0; i < count; i++) {
			     persons[i]->printdata();
			}
			break;
		default:
			cout << "Invalid choice\n";
			return;
		}
		if (!found) {
			display::showAccountNotFound2();
		}
	}
	void search() {
		int choice;
		bool found = false;
		int idsearch;
		cin >> choice;
		display::showenterMessage();
		cin >> idsearch;
		switch (choice) {
		case 1:
			for (int i = 0; i < count; i++) {
				if (persons[i]->getId() == idsearch && persons[i]->getType() == "student") {
					persons[i]->printdata();
					found = true;
					break;
				}
			}
			break;
		case 2 :
			for (int i = 0; i < count; i++) {
				if (persons[i]->getId() == idsearch&&persons[i]->getType()=="professor") {
					persons[i]->printdata();
					found = true;
					break;
				}
			}
			break;
		case 3:
			for (int i = 0; i < count; i++) {
				if (persons[i]->getId() == idsearch && persons[i]->getType() == "Administrator") {
					persons[i]->printdata();
					found = true;
					break;
				}
			}
			break;
		case 4:
			for (int i = 0; i < count; i++) {
				if (persons[i]->getId() == idsearch) {
					persons[i]->printdata();
					found = true;
					break;
				}
			}
			break;
		default :
			break;
		}
		if (found == false) {
			display::showAccountNotFound();
		}
	}
	void edit() {
		int choice;
		bool found = false;
		int idedit;
		cin >> choice;
		display::showenterMessage();
		cin >> idedit;
		switch (choice) {
		case 1:
			for (int i = 0; i < count; i++) {
				if (persons[i]->getId() == idedit && persons[i]->getType() == "student") {
					persons[i]->update();
					found = true;
					display::showAccountedited();
					break;
				}
			}
			break;

		case 2:
			for (int i = 0; i < count; i++) {
				if (persons[i]->getId() == idedit && persons[i]->getType() == "professor") {
					persons[i]->update();
					found = true;
					display::showAccountedited();
					break;
				}
			}
			break;
		case 3:
			for (int i = 0; i < count; i++) {
				if (persons[i]->getId() == idedit && persons[i]->getType() == "Administrator") {
					persons[i]->update();
					found = true;
					display::showAccountedited();
					break;
				}
			}
			break;
		default:
			break;
		}
		if (found == false) {
			display::showAccountNotFound();
 		}
	}
	void delet() {
		int choice;
		int iddelet;
		bool found = false;
		cin >> choice;
		display::showenterMessage();
		cin >> iddelet;
		switch (choice) {
		case 1:
			for (int i = 0; i < count; i++) {
				if (persons[i]->getId() == iddelet && persons[i]->getType() == "student")
				{
					delete persons[i];
					found = true;
					for (int j = i; j < count - 1; j++) {
						persons[j] = persons[j + 1];
					}
					count--;
					display::showAccountDeleted();
					break;
				}
			}
			break;
		case 2:
			for (int i = 0; i < count; i++) {
				if (persons[i]->getId() == iddelet && persons[i]->getType() == "professor")
				{
					delete persons[i];
					found = true;
					for (int j = i; j < count - 1; j++) {
						persons[j] = persons[j + 1];
					}
					count--;
					display::showAccountDeleted();
					break;
				}
			}
			break;
		case 3:
			for (int i = 0; i < count; i++) {
				if (persons[i]->getId() == iddelet && persons[i]->getType() == "Administrator")
				{
					delete persons[i];
					found = true;
					for (int j = i; j < count - 1; j++) {
						persons[j] = persons[j + 1];
					}
					count--;
					display::showAccountDeleted();
					break;
				}
			}
			break;
		default:
 			break;
		}
           	
	if (found != true) {
		display::showAccountNotFound();
	}
	}
};

