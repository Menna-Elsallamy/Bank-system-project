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
    static vector<string> split(const string& line, char separator = ',') {
        vector<string> finalresult;
        stringstream ss(line);
        string part;
        while (getline(ss, part, separator)) {
            finalresult.push_back(part);
        }

        return finalresult;
    }
    static Client parseToClient(const string& line) {
        vector<string> clientInfo = split(line);

        Client client;
        client.setName(clientInfo[0]);
        client.setPassword(clientInfo[1]);
        client.setId(stoi(clientInfo[2]));
        client.setBalance(stod(clientInfo[3]));
        return client;
    }
     static Admin parseToAdmin(const string& line) {
        vector<string> adminInfo = split(line);
        Admin admin;
        admin.setName(adminInfo[0]);
        admin.setPassword(adminInfo[1]);
        admin.setId(stoi(adminInfo[2]));
        admin.setSalary(stod(adminInfo[3]));
        return admin;
    }
   static Employee parseToEmployee(const string& line) {
        vector<string> employeeInfo = split(line);

        Employee employee;
        employee.setName(employeeInfo[0]);
        employee.setPassword(employeeInfo[1]);
        employee.setId(stoi(employeeInfo[2]));
        employee.setSalary(stod(employeeInfo[3]));
        return employee;
    }
};
#endif // PARSER_H
