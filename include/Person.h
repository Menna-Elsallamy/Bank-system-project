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
       if (Validation::name(name)) {
			this->name = name;
		}
		if (Validation::password(password)) {
			this->password = password;
		}
        this->id=id;

    }
      Person(string name, string password) {
       if (Validation::name(name)) {
			this->name = name;
		}
		if (Validation::password(password)) {
			this->password = password;
		}
    }

    // Setters
	void setName(string name) {
		if (Validation::name(name)) {
			this->name = name;
		}
	}
	void setPassword(string password) {
		if (Validation::password(password)) {
			this->password = password;
		}

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

