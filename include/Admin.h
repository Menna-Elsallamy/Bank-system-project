#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include <fstream>
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
 void saveToFile(const string& fileName) {
        fstream file(fileName, ios::out);
        if (file.is_open()) {
            file << getName() << "," << getId()<<  ","<<getPassword()<< "," << salary << endl;  // Corrected from balance to salary
            file.close();
        } else {
           std:: cout << "Error: Could not open file " << fileName << endl;
        }
    }
    void addEmployee(Employee& employee) {
		allEmployees.push_back(employee);
	}
	Employee* searchEmployee(int id) {
		for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) {
			if (eIt->getId() == id) return &(*eIt);
		}
		return NULL;
	}
	void editEmployee(int id, string name, string password, double salary) {
		searchEmployee(id)->setName(name);
		searchEmployee(id)->setPassword(password);
		searchEmployee(id)->setSalary(salary);
	}
	void listEmployee() {
		for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) {
			eIt->display();
			cout << "--------------------\n";
		}
	}

};
static vector<Admin> allAdmins;
static vector<Admin>::iterator aIt;
#endif // ADMIN_H
