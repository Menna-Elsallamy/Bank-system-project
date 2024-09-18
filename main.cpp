#include <iostream>
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Admin.h"

using namespace std;

int main() {
    // Test Person class
    Person person1("JohnDoe", "password123", 1);
    person1.displayInfo();
    cout << endl;

    // Test Client class
    Client client1("JaneDoe", "securePass", 2, 2000);
    client1.display();
    client1.deposit(500);
    client1.checkBalance();
    client1.withdraw(300);
    client1.checkBalance();
    Client client2("AliceSmith", "anotherPass", 3, 1500);
    client1.transferTo(200, client2);
    client1.checkBalance();
    client2.checkBalance();
    cout << endl;

    // Test Employee class
    Employee employee1("BobBrown", "employeePass", 4, 6000);
    employee1.display();
    cout << endl;

    // Test Admin class
    Admin admin1("CharlieBlack", "adminPass", 5, 7000);
    admin1.display();

    return 0;
}

