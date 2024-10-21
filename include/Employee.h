#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <fstream>
#include "Person.h"
#include "Validation.h"
#include "Client.h"


class Employee : public Person {
protected:
    double salary;
public:
    Employee() : Person(), salary(0.0) {}

    Employee(string name, string password, int id, double salary)
        : Person(name, password, id) {
         if (Validation::salary(salary)) {
            this->salary = salary;
        }
    }

    Employee(string name, string password, double salary)
        : Person(name, password) {
         if (Validation::salary(salary)) {
            this->salary = salary;
        }
    }
    // Save employee details to a file
 /* void saveToFile(const string& fileName) {
        fstream file(fileName, ios::out);
        if (file.is_open()) {
            file << getName() << "," << getId()<<  ","<<getPassword()<< "," << salary << endl;  // Corrected from balance to salary
            file.close();
        } else {
           std:: cout << "Error: Could not open file " << fileName << endl;
        }
    }
*/
    // Setters
    void setSalary(double salary) {
        if (Validation::salary(salary)) {
            this->salary = salary;
        }
    }

    // Getters
    double getSalary() {
        return salary;
    }

    // Display function
    void display() {
        Person::displayInfo();
       std:: cout << "Salary: " << salary << endl;
    }
    void addClient(Client& client) {
		allClients.push_back(client);
	}
	Client* searchClient(int id) {
		for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) {
if (clIt->getId() == id) return &(*clIt);
		}
		return NULL;
	}
	void listClient() {
		for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) {
			clIt->display();
			cout << "-------------------------\n";
		}
	}
	void editClient(int id, string name, string password, double balance) {
		searchClient(id)->setName(name);
		searchClient(id)->setPassword(password);
		searchClient(id)->setBalance(balance);
	}
};

static vector<Employee> allEmployees;
static vector<Employee>::iterator eIt;

#endif // EMPLOYEE_H
