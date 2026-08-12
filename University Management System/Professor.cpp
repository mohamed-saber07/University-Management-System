#include "Professor.h"

void Professor::setSalary(double salary)
{
	Salary = salary;
}

double Professor::getSalary()
{
	return Salary;
}

void Professor::setSubject(string subject)
{
	Subject = subject;
}

string Professor::getSubject()
{
	return Subject;
}

void Professor::setOfficeNumber(string officeNumber)
{
	OfficeNumber = officeNumber;
}

string Professor::getOfficeNumber()
{
	return OfficeNumber;
}
