#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#pragma once
#include <iostream>
#include "DataSourceInterface.h"
#include "FilesHelper.h"
using namespace std;

  class FileManager : public DataSourceInterface {
private:
	static void addClient(Client client) {
		FilesHelper::saveClient(client);
	}
	static void addEmployee(Employee employee) {
		FilesHelper::saveEmployee("Employees.txt", "EmployeeLastId.txt", employee);
	}
	static void addAdmin(Admin admin) {
		FilesHelper::saveEmployee("Admins.txt", "AdminLastId.txt", admin);
	}
	 void getAllClients() {
            vector<Client> clients = FilesHelper::getClients();
            for (Client& c : clients) {
                c.display();
            }
        }

        void getAllEmployees() {
            vector<Employee> employees = FilesHelper::getEmployees();
            for (Employee& e : employees) {
                e.display();
            }
        }

        void getAllAdmins(){
            vector<Admin> admins = FilesHelper::getAdmins();
            for (Admin& a : admins) {
                a.display();
            }
        }

	static void removeAllClients() {
		FilesHelper::clearFile("Clients.txt", "ClientLastId.txt");
	}
	static void removeAllEmployees() {
		FilesHelper::clearFile("Employees.txt", "EmployeeLastId.txt");
	}
	static void removeAllAdmins() {
		FilesHelper::clearFile("Admins.txt", "AdminLastId.txt");
	}
};
#endif // FILEMANAGER_H
