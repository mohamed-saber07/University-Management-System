#pragma once
using namespace std;
#include <string>
#include <iostream>
#include "Person.h"
class Professor :public Person
{ private:
	double Salary;
	string Subject;
	string OfficeNumber;
public:
	void setSalary(double salary);
	double getSalary();
	void setSubject(string subject);
	string getSubject();
	void setOfficeNumber(string officeNumber);
	string getOfficeNumber();
	void ReadData()override {
	Person::ReadData();
		double salary;
		string subject;
		string officenumber;
		cout << "enter the salary : ";
		cin >> salary;
		setSalary(salary);
		cout << "enter the subject : ";
		cin >> subject;
		setSubject(subject);
		cout << "enter the officenumber : ";
		cin >> officenumber;
		setOfficeNumber(officenumber);
	}
	void printdata() override {
		Person::printdata();
		cout << "salary : " << getSalary() << "\n" << "subject : " << getSubject() << "\n";
		cout << "officenumber : " << getOfficeNumber() << "\n";
	}
	Professor(string name, int id, int age, string phone, double salary, string supject, string officenumber) :Person(name, id, age, phone), Salary(salary), Subject(supject), OfficeNumber(officenumber) {

	}
	void showrole() override {
		
	}
	Professor() {
		
	}
	string getType()override {
		return "professor";
 	}
	void update()override {
		double salary;
		string officenumber;
		cout << "enter the salary : ";
		cin >> salary;
		setSalary(salary);
		cout << "enter the officenumber : ";
		cin >> officenumber;
		setOfficeNumber(officenumber);
	}
};