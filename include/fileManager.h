#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#pragma once
#include <iostream>
#include "DataSourceInterface.h"
#include "FileHelper.h"
using namespace std;

  class fileManager : public DataSourceInterface {
private:
	 void addClient(Client client) {
		FileHelper::saveClient(client);
	}
	 void addEmployee(Employee employee) {
		FileHelper::saveEmployee("EmployeeData.txt", "EmployeeLastId.txt", employee);
	}
	 void addAdmin(Admin admin) {
		FileHelper::saveEmployee("AdminData.txt", "AdminLastId.txt", admin);
	}
	void getAllClients() {
          /*  vector<Client> clients = FileHelper::getClients();
            for (Client& c : clients) {
                c.display();
            }*/
           FileHelper::getClients();
        }
        void getAllEmployees() {
          /*  vector<Employee> employees = FileHelper::getEmployees();
            for (Employee& e : employees) {
                e.display();
            }*/
            FileHelper::getEmployees();
        }

        void getAllAdmins(){
            /*vector<Admin> admins = FileHelper::getAdmins();
            for (Admin& a : admins) {
                a.display();
            }*/
           FileHelper::getAdmins();
        }

	 void removeAllClients() {
		FileHelper::clearFile("ClientData.txt", "ClientLastId.txt");
	}
	 void removeAllEmployees() {
		FileHelper::clearFile("EmployeeData.txt", "EmployeeLastId.txt");
	}
	 void removeAllAdmins() {
		FileHelper::clearFile("AdminData.txt", "AdminLastId.txt");
	}


	public:
	 void getAllData() {
		// fileManager fm;
        getAllClients();
        getAllEmployees();
        getAllAdmins();
	}
	 void updateClients() {
        //fileManager fm;
	     removeAllClients();
		for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) addClient(*clIt);
	}
	 void updateEmployees() {
	     //fileManager mm;
		removeAllEmployees();
		for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) addEmployee(*eIt);
	}
	 void updateAdmins() {
	      //fileManager fm;
		removeAllAdmins();
		for (aIt = allAdmins.begin(); aIt != allAdmins.end(); aIt++) addAdmin(*aIt);
	}

};
#endif // FILEMANAGER_H
