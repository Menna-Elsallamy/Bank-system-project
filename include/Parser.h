#ifndef PARSER_H
#define PARSER_H
#include "Admin.h"
#include <vector>
#include <string>
#include <sstream>
#include "Client.h"
#include "Employee.h"
using namespace std;

class Parser {
public:
    static vector<string> split(string line) {
        vector<string> data;
        stringstream ss(line);
        string token;
        while (getline(ss, token,',')) {
            data.push_back(token);
        }
        return data;
    }
    static Client parseToClient(string line) {
        vector<string> clientInfo = split(line);
        Client client(clientInfo[0],clientInfo[1],stoi(clientInfo[2]),stod(clientInfo[3]));
        return client;
    }
     static Admin parseToAdmin(string line) {
        vector<string> adminInfo = split(line);
        Admin admin(adminInfo[0],adminInfo[1],stoi(adminInfo[2]),stod(adminInfo[3]));
        return admin;
    }
   static Employee parseToEmployee(string line) {
        vector<string> employeeInfo = split(line);
        Employee employee(employeeInfo[0],employeeInfo[1],stoi(employeeInfo[2]),stod(employeeInfo[3]));
        return employee;
    }
};
#endif // PARSER_H
