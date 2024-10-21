#ifndef FILEHELPER_H
#define FILEHELPER_H
#pragma once
#include <fstream>
#include "Parser.h"
class FileHelper {
private:
	static void saveLastID(string lastIdFile, int id) {
		ofstream file;
		file.open(lastIdFile);
		file << id;
		file.close();
	}
public:
	static int getLastID(string lastIdFile) {
		ifstream file;
		file.open(lastIdFile);
		int id;
		file >> id;
		file.close();
		return id;
	}
	static void saveClient(Client client) {
		int id = getLastID("ClientLastId.txt");
		ofstream file;
		file.open("ClientData.txt", ios::app);
		file << client.getName() << ',' << client.getPassword() << ',' << id + 1 << ',' << client.getBalance() << "\n";
		file.close();
		saveLastID("ClientLastId.txt", id + 1);
	}
	static void saveEmployee(string dataFile, string lastIdFile, Employee employee) {
		int id = getLastID(lastIdFile);
		ofstream file;
		file.open(dataFile, ios::app);
		file <<  employee.getName() << ',' << employee.getPassword()<< ','  <<id + 1 << ',' << employee.getSalary() << "\n";
		file.close();
		saveLastID(lastIdFile, id + 1);
	}
	static void saveAdmin(string dataFile, string lastIdFile, Admin admin) {
		int id = getLastID("AdminLastId.txt");
		ofstream file;
		file.open(dataFile, ios::app);
		file << admin.getName() << ',' << admin.getPassword() << ',' << id + 1 << ',' << admin.getSalary() << "\n";
		file.close();
		saveLastID(lastIdFile, id + 1);
	}
	static void getClients() {
		string line;
		ifstream file;
		file.open("ClientData.txt");
		while (getline(file, line)) {
			Client c = Parser::parseToClient(line);
			allClients.push_back(c);
		}
		file.close();
	}
	static void getEmployees() {
		string line;
		ifstream file;
		file.open("EmployeeData.txt");
		while (getline(file, line)) {
			Employee e = Parser::parseToEmployee(line);
			allEmployees.push_back(e);
		}
		file.close();
	}
	static void getAdmins() {
		string line;
		ifstream file;
		file.open("AdminData.txt");
		while (getline(file, line)) {
			Admin a = Parser::parseToAdmin(line);
			allAdmins.push_back(a);
		}
		file.close();
	}
	static void clearFile(string datafile, string lastIdFile) {
		ofstream clearFile, zeroID;
		clearFile.open(datafile,ios::trunc);
        clearFile.close();

        zeroID.open(lastIdFile);
        zeroID<<0;
        zeroID.close();
	}
};
#endif // FILEHELPER_H
