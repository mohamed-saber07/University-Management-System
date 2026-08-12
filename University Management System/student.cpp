#include "student.h"

void student::setLevel(int level)
{
	Level = level;
}

int student::getLevel()
{
	return Level;
}

void student::setGPA(float gpa)
{
	GPA = gpa;
}

double student::getGPA()
{
	return GPA;
}

void student::setDepartment(string department)
{
	Department = department;
}

string student::getDepartment()
{
	return Department;
}
