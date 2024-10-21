#ifndef CLIENTMANAGER_H
#define CLIENTMANAGER_H
#include "Person.h"
#include "fileManager.h"
class clientManager
{
    private:
        static void printClientMenu(){
        cout<<"(1) Display my info"<<endl;
        cout<<"(2) Check balance"<<endl;
        cout<<"(3) update Password"<<endl;
        cout<<"(4) Withdraw"<<endl;
        cout<<"(5) deposit"<<endl;
        cout<<"(6) Transfer amount"<<endl;
        cout<<"(7) logout\n"<<endl;
        }
    static void updatePassword(Person* person){
    string newPassword;
    cout << "Enter new password: ";
    cin >> newPassword;
    person->setPassword(newPassword);
    cout<<"Password updated";
    }
     static void back(Client* client) {
        cout << "Returning to previous menu..." << endl;
    }

    public:
         static void requestPasswordUpdate(Person* person) {
        updatePassword(person); // Call the private method
    }
    static Client* login(int id, string password) {
		for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) {
			if (clIt->getId() == id && clIt->getPassword() == password)   return &(*clIt); ;
		}
		return NULL;
	}
	static bool clientOptions(Client* client) {
		printClientMenu();
		cout << "Your choice is: ";
		fileManager m;
		Employee e;
		double amount;
		int choice, id;
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			client->display();
			break;
		case 2:
			system("cls");
			client->checkBalance();
			break;
		case 3:
			updatePassword(client);
			m.updateClients();
			break;
		case 4:
			system("cls");
			cout << "Enter amount to withdraw: ";
			cin >> amount;
			client->withdraw(amount);
			m.updateClients();
			break;
		case 5:
			system("cls");
			cout << "Enter amount to deposit: ";
			cin >> amount;
			client->deposit(amount);
			m.updateClients();
			break;
		case 6:
			system("cls");
			cout << "Enter id of the recipient: ";
			cin >> id;
			while (e.searchClient(id) == NULL) {
				system("cls");
				cout << "Invalid id.\n";
				cout << "\nEnter id of the recipient: ";
				cin >> id;
			}
			cout << "\nEnter amount to transfer: ";
			cin >> amount;
			client->transferTo(amount, *e.searchClient(id));
			m.updateClients();
			break;
		case 7:
			return false;
			break;
		default:
			system("cls");
			clientOptions(client);
			return true;
		}
		back(client);
		return true;
	}
};
#endif // CLIENTMANAGER_H
