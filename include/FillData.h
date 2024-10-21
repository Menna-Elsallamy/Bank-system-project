#ifndef FILLDATA_H
#define FILLDATA_H
#include "Validation.h"
class FillData
{
public:
    static string enterName(){
    string name;
    cout<<"\nPlease enter your name.....\n";
    getline(cin,name);
    while(!(Validation::name(name))){
        cout<<"\nName is not valid\n";
        cout<<"Name must be alphabet from 3 to 30 char\n";
        cout<<"please enter a valid name\n";
        getline(cin,name);
    }
    return name;
    }
    static string enterPassword(){
    string password;
    cout<<"\nPlease enter your password.....\n";
    cin>>password;
    while(!Validation::password(password)){
        cout<<"\nPassword is not valid\n";
        cout<<"Password must be  from 8 to 25 char\n";
        cout<<"please enter a valid Password\n";
        cin>>password;
    }
    return password;
    }

    static double enterBalance(){
    double balance;
    cout<<"\nPlease enter client's balance.....\n";
    cin>>balance;
    while(!Validation::balance(balance)){
        cout<<"\nBalance is not valid\n";
        cout<<"minimum balance is 1500\n";
        cout<<"please enter a valid balance\n";
        cin>>balance;
    }
    return balance;
    }
    static double enterSalary(){
    double salary;
    cout<<"\nPlease enter employee's balance.....\n";
    cin>>salary;
    while(!Validation::salary(salary)){
        cout<<"\nsalary is not valid\n";
        cout<<"minimum salary is 5000\n";
        cout<<"please enter a valid salary\n";
        cin>>salary;
    }
    return salary;
    }
};

#endif // FILLDATA_H
