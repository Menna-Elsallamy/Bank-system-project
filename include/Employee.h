#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
#include "Validation.h"
using namespace std;
class Employee : public Person {
protected:
double salary;
public:
    Employee() :  Person(), salary(0.0) {
    }
    Employee(string name, string password, int id, double salary) : Person(name,  password,  id) {
         setSalary(salary);
    }

    //setters
    void setSalary(double salary) {
        if (Validation::salary(salary)) {
			this->salary = salary;
		}
		else
			cout << "Salary is invalid ..." << endl;
	}

    //getters
    double getSalary(){
    return salary;
 }
 //displayfunction
 void display() {
		Person::displayInfo();
		cout << "salary : " << salary << endl;
	}
};

#endif // EMPLOYEE_H
