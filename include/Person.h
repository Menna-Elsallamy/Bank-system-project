#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>  // Include the string library
#include "Validation.h"  // Include the Validation class

class Person
{
    // Attributes
protected:
    string name, password;
    int id;

public:
    // Default Constructor
    Person():id(0) {}

    // Parameterized Constructor
    Person(string name, string password, int id) {
        setName(name);
        setPassword(password);
        this->id=id;

    }

    // Setters
	void setName(string name) {
		if (Validation::name(name)) {
			this->name = name;
		}
		else
		std::	cout << "invalid name " << endl;

	}
	void setPassword(string password) {
		if (Validation::password(password)) {
			this->password = password;
		}
		else
		std::	cout << "invalid password..." << endl;
	}
    void setId(int id) {
        this->id = id;
    }

    // Getters
    string getName() {
        return name;
    }

    string getPassword() {
        return password;
    }

    int getId() {
        return id;
    }

    void displayInfo(){
    std:: cout << "ID: " << id << endl;
    std:: cout << "Name: " << name << endl;
    }

    // Destructor
    ~Person() {}
};

#endif // PERSON_H

