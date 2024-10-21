#include <iostream>
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include <fstream>

#include <iostream>
#include "Parser.h"

#include <iostream>
#include "Parser.h"
#include "Screens.h"
int main(){
    Screens::runApp();
 // Create Admin, Employee, and Client objects
   /* Admin admin1("John", "adminPass123", 101, 6000.0);
    Employee employee1("Jane", "empPass456", 202, 5500.0);
    Client client1("Alice", "clientPass789", 303, 2000.0);

    // Displaying details
    std::cout << "Admin details:" << std::endl;
    admin1.display();

    std::cout << "\nEmployee details:" << std::endl;
    employee1.display();

    std::cout << "\nClient details:" << std::endl;
    client1.display();

    // Saving details to file
    admin1.saveToFile("Admin.txt");
    employee1.saveToFile("employee.txt");
    client1.saveToFile("client.txt");

    // Edit and display employee details
    std::cout << "\nEditing employee details...\n";
    employee1.setName("Jane Doe");
    employee1.setSalary(6000);
    employee1.display();

    // Admin adding employee and listing all employees
    std::cout << "\nAdmin adds an employee and lists all employees:\n";
    admin1.addEmployee(employee1);
    admin1.listEmployee();

    // Client deposit and transfer
    std::cout << "\nClient deposits money and checks balance:\n";
    client1.deposit(500);
    client1.checkBalance();

    Client client2("Bob", "clientPass012", 404, 3000.0);
    std::cout << "\nClient1 transfers to Client2:\n";
    client1.transferTo(1000, client2);

    std::cout << "\nClient1 new balance:" << std::endl;
    client1.checkBalance();

    std::cout << "\nClient2 new balance:" << std::endl;
    client2.checkBalance();

cout<<"hello";}
/*int main() {
    // Adjusted data lines to meet validation rules
    string clientLine = "JohnDoe,password123,101,1500.75";  // Client with valid data
    string adminLine = "AdminJane,strongpass,201,5000.50";  // Admin with salary >= 5000
    string employeeLine = "JackSmith,employeepass,301,6000.25";  // Employee with salary >= 5000

    // Parsing the client
    Client client = Parser::parseToClient(clientLine);
    cout << "Client Name: " << client.getName() << endl;
    cout << "Client Password: " << client.getPassword() << endl;
    cout << "Client ID: " << client.getId() << endl;
    cout << "Client Balance: " << client.getBalance() << endl;

    // Parsing the admin
    Admin admin = Parser::parseToAdmin(adminLine);
    cout << "\nAdmin Name: " << admin.getName() << endl;
    cout << "Admin Password: " << admin.getPassword() << endl;
    cout << "Admin ID: " << admin.getId() << endl;
    cout << "Admin Salary: " << admin.getSalary() << endl;

    // Parsing the employee
    Employee employee = Parser::parseToEmployee(employeeLine);
    cout << "\nEmployee Name: " << employee.getName() << endl;
    cout << "Employee Password: " << employee.getPassword() << endl;
    cout << "Employee ID: " << employee.getId() << endl;
    cout << "Employee Salary: " << employee.getSalary() << endl;

    return 0;
}*/


/*int main() {
/*fstream file;
string fileName="firstFile.txt";
file.open(fileName,ios::out);
file<<"helloWorld";
file.close();*/
/*fstream file;
string s;
string fileName="firstFile.txt";
file.open(fileName,ios::in);
while(getline(file,s)){
    cout<<s<<endl;
}
//file>>s;
file.close();
cout<<s;*/
    // Test Person class
   /* Person person1("JohnDoe", "password123", 1);
 //   person1.displayInfo();
    std::cout << endl;

    // Test Client class
    Client client1("JaneDoe", "securePass", 2, 2000);
   // client1.display();
   /* string FileName="Clients.txt";
    fstream file(FileName,ios::app);
    file<<client1.getName()<< "," <<client1.getId()<< "," <<client1.getBalance()<<endl;
    file.close();*/
   /* client1.deposit(500);
    client1.checkBalance();
    client1.withdraw(300);
    client1.checkBalance();
    Client client2("AliceSmith", "anotherPass", 3, 1500);
    client1.transferTo(200, client2);
    client1.checkBalance();
    client2.checkBalance();*/
   // cout << endl;

    // Test Employee class
  /*  Employee employee1("BobBrown", "employeePass", 4, 6000);
        employee1.saveToFile("Employee.txt");
    //Client client = Parser::parseToEmployee(clientData);

   // employee1.display();

    cout << endl;

    // Test Admin class
  /*  Admin admin1("CharlieBlack", "adminPass", 5, 7000);
    admin1.saveToFile("Admin.txt");*/

   // admin1.display();
    /*string FileNameThree="Admin.txt";
    fstream fileThree(FileNameThree,ios::out);
    fileThree<<admin1.getName()<< "," <<admin1.getId()<< "," <<admin1.getSalary()<<endl;
    fileThree.close();*/

    return 0;
}

