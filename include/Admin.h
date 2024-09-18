#ifndef ADMIN_H
#define ADMIN_H
#include "Employee.h"
class Admin : public Employee
{
public:
	Admin() : Employee() {

	}
	Admin( string name, string password,int id, double salary) : Employee( name, password,id, salary) {

	}
 void display() {
		Employee::display();
	}
};
#endif // ADMIN_H
