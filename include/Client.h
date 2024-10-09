#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include "Person.h"
#include "Validation.h"
#include <fstream>
#include <vector>

class Client:public Person{
    private:
        double balance;
     public:
//Constructor
	Client() : Person(), balance(0)
	{}
	Client(string name, string password,int id, double balance) :Person( name, password,id) {
		setBalance(balance);
	}

	void setBalance(double balance) {
		if (Validation::balance(balance)) {
			this->balance = balance;
		}
		else
			std::cout << "Balance is invalid ..." << endl;
	}
	//getter
	double getBalance() {
		return balance;
	}
	//methods
	void deposit(double amount) {
		if (amount > 0)
			this->balance += amount;
	}
	void withdraw(double amount) {
		if (amount <= balance && amount > 0)
			this->balance -= amount;
	}
	void transferTo(double amount, Client& recipient) {
		withdraw(amount);
		recipient.deposit(amount);
	}
	void checkBalance() {

		std::cout << "Balance : " << balance << endl;
	}
	void display() {
		Person::displayInfo();
		std::cout << "Balance : " << balance << endl;
	}
	void saveToFile(const string& fileName) {
        fstream file(fileName, ios::out);
        if (file.is_open()) {
file << getName() << "," << getPassword() << "," << getId() << "," << balance << endl;
            file.close();
        } else {
            std::cout << "Error: Could not open file " << fileName << endl;
        }}
};

static vector<Client> allClients;
static vector<Client>::iterator clIt;
#endif // CLIENT_H

