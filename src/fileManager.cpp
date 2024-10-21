/*#include "fileManager.h"
#include "fileHelper.h"

// Implementing the static functions
void FileManager::addClient(const Client& client) {
    fileHelper::saveClient(client);
}

void FileManager::addEmployee(const Employee& employee) {
    fileHelper::saveEmployee("Employees.txt", "EmployeeLastId.txt", employee);
}

void FileManager::addAdmin(const Admin& admin) {
    fileHelper::saveEmployee("Admins.txt", "AdminLastId.txt", admin);
}

void FileManager::getAllClients() {
    vector<Client> clients = fileHelper::getClients();
    for (Client& c : clients) {
        c.display();
    }
}

void FileManager::getAllEmployees() {
    vector<Employee> employees = fileHelper::getEmployees();
    for (Employee& e : employees) {
        e.display();
    }
}

void FileManager::getAllAdmins() {
    vector<Admin> admins = fileHelper::getAdmins();
    for (Admin& a : admins) {
        a.display();
    }
}

void FileManager::removeAllClients() {
    fileHelper::clearFile("ClientData.txt", "ClientLastId.txt");
}

void FileManager::removeAllEmployees() {
    fileHelper::clearFile("EmployeeData.txt", "EmployeeLastId.txt");
}

void FileManager::removeAllAdmins() {
    fileHelper::clearFile("AdminData.txt", "AdminLastId.txt");
}

void FileManager::updateClients(const vector<Client>& allClients) {
    removeAllClients();
    for (const auto& client : allClients) {
        addClient(client);
    }
}

void FileManager::updateEmployees(const vector<Employee>& allEmployees) {
    removeAllEmployees();
    for (const auto& employee : allEmployees) {
        addEmployee(employee);
    }
}

void FileManager::updateAdmins(const vector<Admin>& allAdmins) {
    removeAllAdmins();
    for (const auto& admin : allAdmins) {
        addAdmin(admin);
    }
}
*/
