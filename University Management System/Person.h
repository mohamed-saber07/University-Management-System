#pragma once
using namespace std;
#include <string>
#include <iostream>
class Person
{
private:
	string Name;
	int ID;
	int Age;
    string Phone;
public:
	void setName(string name);
	string getName();
	void setId(int id);
	int getId();
	void setAge(int age);
	int getAge();
	void setPhone(string phone);
	string getPhone();
	virtual void ReadData(){
		int id;
		string name;
	    int age;
		string phone;
			cout << "enter the name :"<<"\n";
			cin >> name;
			setName(name);
			cout << "enter the id : " << "\n";
			cin >> id;
			setId(id);
			cout << "enter the age : " << "\n";
			cin >> age;
			setAge(age);
			cout << "enter the phone : " << "\n";
			cin >> phone;
			setPhone(phone);
	}
	 virtual void printdata() {
		cout << "Id : " << getId() << "\n" << "name : " << getName() << "\n";
		cout << "age : " << getAge() << "\n" << "phone : " << getPhone() << "\n";
	}
    virtual void showrole(){}
	Person(string name, int id, int age, string phone)
		: Name(name), ID(id), Age(age), Phone(phone)
	{
	}
	Person()
	{
	}
	virtual string getType()=0; 
	virtual void update() {
		int age;
		string phone;
		string name;
		cout << "enter the age : " << "\n";
		cin >> age;
		cout << "enter the phone : " << "\n";
		cin >> phone;
		cout << "enter the name :" << "\n";
		cin >> name;
		setAge(age);
		setName(name);
		setPhone(phone);
	}
	virtual ~Person() = default;
	
};

