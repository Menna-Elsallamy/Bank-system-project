# Bank-system--project
 Overview: The Bank System Application is designed to manage the operations of a bank efficiently through three key modules: Client, Employee, and Admin. Each module has specific functionalities tailored to different user roles. The system follows object-oriented design principles by utilizing inheritance and encapsulation to create a scalable and maintainable application.

# Modules:

## Client Module:
Each client has a unique ID, name, password, and account balance.
Clients can perform essential banking operations like logging into the system, depositing money, withdrawing money, checking their balance, and transferring money to other clients.
Employee Module:
## Employee Module:
Each employee has an ID, name, password, and salary.
Employees can log in, add new clients, search for clients by ID, list all clients, and edit client information.
Employees can also view their personal information such as salary and ID.
Admin Module:
## Admin Module:
The admin has the same capabilities as an employee but with additional privileges.
Admins can add new employees, search for employees by ID, list all employees, and edit employee details.
# Key Features:
Client Management: Employees and admins can create, view, and manage client accounts.
Employee Management: Admins can add new employees, manage existing employees, and review employee data.
Bank Operations: Clients can perform essential banking functions such as deposits, withdrawals, balance checks, and money transfers.
#Class Design
The system uses an inheritance-based structure where a Person base class contains shared attributes like name, id, and password.
The Client and Employee classes inherit from Person, and the Admin class inherits from Employee with additional privileges.
A Validation class is designed to handle all input validation (such as name format, password length, balance, and salary constraints) to ensure data integrity.

# Technologies used:
The project is built using C++ and adheres to object-oriented programming (OOP) principles.
The design ensures scalability and flexibility for future extensions, such as adding more roles (e.g., managers or auditors) or expanding the system to handle more complex banking transactions.
Goals: The goal of this project is to provide a simple and clear banking system that demonstrates the use of OOP concepts such as inheritance, encapsulation, and data validation. It also aims to simulate real-world banking scenarios by allowing multiple user roles to interact with the system while maintaining data security and integrity.
