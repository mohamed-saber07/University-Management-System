#pragma once
using namespace std;
#include <string>
#include <iostream>
#include "Person.h"
class student :public Person
{
private:
	int	Level;
	double GPA;
	string Department;
public:
	void setLevel(int level);
	int getLevel();
	void setGPA(float gpa);
	double getGPA();
	void setDepartment(string department);
	string getDepartment();
	void ReadData() override {
	Person::ReadData();
		int level;
		double gpa;
		string department;
		cout << "enter the level : "<<"\n";
		cin >> level;
		setLevel(level);
		cout << "enter the gpa : "<<"\n";
		cin >> gpa;
		setGPA(gpa);
		cout << "enter the department : "<<"\n";
		cin >> department;
		setDepartment(department);
	}
	void printdata() override {
		Person::printdata();
		cout << "level : " << getLevel() << "\n" << "gpa : " << getGPA() << "\n";
		cout << "department : " << getDepartment() << "\n";
	}
	student(string name, int id, int age, string phone, int level, double gpa, string department) :Person(name, id, age, phone), Level(level), GPA(gpa), Department(department) {

	}
	void showrole() override {
		cout << "iam student ";
	}
	student()
	{
		
	}
	string getType()override {
		return "student";
	}
	void update()override {
		int level;
		string department;
		cout << "enter the level : ";
		cin >> level;
		setLevel(level);
		cout << "enter the department : ";
		cin >> department;
		setDepartment(department);
	}
	
	
};

