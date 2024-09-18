#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include "Person.h"
#include "Validation.h"
using namespace std;
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
			cout << "Balance is invalid ..." << endl;
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

		cout << "Balance : " << balance << endl;
	}
	void display() {
		Person::displayInfo();
		cout << "Balance : " << balance << endl;
	}
};
#endif // CLIENT_H

