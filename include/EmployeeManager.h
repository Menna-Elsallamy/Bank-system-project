#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include <fstream>
class EmployeeManager {
public:
    static void printEmployeeMenu() {
        cout << "\n--- Employee Menu ---\n";
        cout << "1. Add Client\n";
        cout << "2. List All Clients\n";
        cout << "3. Search for Client\n";
        cout << "4. Edit Client Info\n";
        cout << "5. Logout\n";
    }

    static void newClient(Employee* employee) {
        int id;
        string name, password;
        double balance;

        cout << "Enter client ID: ";
        cin >> id;
        cout << "Enter client name: ";
        cin >> name;
        cout << "Enter client password: ";
        cin >> password;
        cout << "Enter initial balance: ";
        cin >> balance;

        Client newClient( name, password, id,balance);
        employee->addClient(newClient);
    }

    static void listAllClients(Employee* employee) {
        employee->listClient();
    }

    static void searchForClient(Employee* employee) {
        int id;
        cout << "Enter client ID to search: ";
        cin >> id;
        Client* client = employee->searchClient(id);
        if (client) {
            client->display();
            delete client;
        }
    }

    static void editClientInfo(Employee* employee) {
        int id;
        string name, password;
        double balance;

        cout << "Enter client ID to edit: ";
        cin >> id;
        cout << "Enter new client name: ";
        cin >> name;
        cout << "Enter new client password: ";
        cin >> password;
        cout << "Enter new balance: ";
        cin >> balance;

        employee->editClient(id, name, password, balance);
    }

    static Employee* login(int id, string password) {
        ifstream file("EmployeeData.txt");
        string line;

        while (getline(file, line)) {
            Employee employee = Parser::parseToEmployee(line);
            if (employee.getId() == id && employee.getPassword() == password) {
                return new Employee(employee);
            }
        }
        cout << "Login failed!" << endl;
        return nullptr;
    }

    static bool employeeOptions(Employee* employee) {
        int choice;
        do {
            printEmployeeMenu();
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
                newClient(employee);
                break;
            case 2:
                listAllClients(employee);
                break;
            case 3:
                searchForClient(employee);
                break;
            case 4:
                editClientInfo(employee);
                break;
            case 5:
                cout << "Logging out...\n";
                return false;
            default:
                cout << "Invalid option! Try again.\n";
            }
        } while (true);
        return true;
    }
};


 /*  #pragma once
   #include "FillData.h"
   #include "fileManager.h"
#include "clientManager.h"

class EmployeeManager {
private:
	static void printEmployeeMenu() {
		system("cls");
		cout << "(1) Display my info" << endl;
		cout << "(2) Update Password" << endl;
		cout << "(3) Add new client" << endl;
		cout << "(4) Search for client" << endl;
		cout << "(5) List all clients" << endl;
		cout << "(6) Edit client info" << endl;
		cout << "(7) Logout\n" << endl;
	}
	static void back(Employee* employee) {
		cout << endl;
		system("pause");
		employeeOptions(employee);
	}
public:
	static void newClient(Employee* employee) {
		Client client;
		client.setId(FileHelper::getLastID("ClientLastId.txt") + 1);
		string password;
		client.setName(FillData::enterName());
		client.setPassword(FillData::enterPassword());
		employee->addClient(client);
		fileManager::updateClients();
		cout << "\nClient added successfully.\n";
	}
	static void searchForClient(Employee* employee) {
		int id;
		system("cls");
		cout << "Enter client id: ";
		cin >> id;
		if (employee->searchClient(id) == NULL) cout << "\nClient not found.\n";
		else employee->searchClient(id)->display();
	}
	static void listAllClients(Employee* employee) {
		system("cls");
		cout << "All clients: \n" << endl;
		employee->listClient();
	}
	static void editClientInfo(Employee* employee) {
		int id;
		system("cls");
		cout << "Enter client id: ";
		cin >> id;
		if (employee->searchClient(id) == NULL) cout << "\nClient not found.\n";
		else {
			string name = FillData::enterName();
			string password = FillData::enterPassword();
			double balance = FillData::enterBalance();
			employee->editClient(id, name, password, balance);
			fileManager::updateClients();
			cout << "\nClient info updated.\n";
		}
	}
	static Employee* login(int id, string password) {
		for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) {
			if (eIt->getId() == id && eIt->getPassword() == password) return &(*eIt);
		}
		return NULL;
	}
	static bool employeeOptions(Employee* employee) {
		printEmployeeMenu();
		cout << "Your choice is: ";
		int choice;
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			employee->display();
			break;
		case 2:
			clientManager::requestPasswordUpdate(employee);
			fileManager::updateEmployees();
			break;
		case 3:
			newClient(employee);
			break;
		case 4:
			searchForClient(employee);
			break;
		case 5:
			listAllClients(employee);
			break;
		case 6:
			editClientInfo(employee);
			break;
		case 7:
			return false;
			break;
		default:
			system("cls");
			employeeOptions(employee);
			return true;
		}
		back(employee);
		return true;
	}
};
*/


#endif // EMPLOYEEMANAGER_H
