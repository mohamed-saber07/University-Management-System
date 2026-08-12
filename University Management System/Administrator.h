#pragma once
using namespace std;
#include <string>
#include <iostream>
#include "Person.h"
class Administrator:public Person
{
private:
	string Joptitle;
	double Salary;
public:
	void setJoptitle(string joptitle);
	string getJoptitle();
	void setSalary(double salary);
	double getSalary();
	void ReadData() override {
		Person::ReadData();
		double salary;
		string joptitle;
		cout << "enter the salary : ";
		cin >> salary;
		setSalary(salary);
		cout << "enter the joptitle : ";
		cin >> joptitle;
		setJoptitle(joptitle);
	}
	void printdata() override {
		Person::printdata();
		cout << "salary : " << getSalary() << "\n" << "joptitle : " << getJoptitle() << "\n";
 	}
	Administrator(string name, int id, int age, string phone, double salary, string joptitle) :Person(name, id, age, phone), Salary(salary),Joptitle(joptitle) {

	}
	void showrole() override {
		cout << "iam administrator ";
	}
     Administrator() {

 	}
	 string getType()override {
		 return "Administrator";
	 }
	 void update()override {
		 double salary;
		 cout << "enter the salary : ";
		 cin >> salary;
		 setSalary(salary);
	 }
};

