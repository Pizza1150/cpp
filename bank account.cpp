#include <iostream>



using namespace std;



int balance = 10000;



void deposit(int amount) {
    balance += amount;
    cout << "Successfully deposit " << amount << " to your account" << endl; }



void withdraw(int amount) {
    if (balance >= amount) {
        balance -= amount; 
        cout << "Successfully withdraw " << amount << " to your account" << endl; }

    else { 
        cout << "You don't have enough balance" << endl; } }



int check() {
    return balance; }



int main() {
    int service;

    while (true) {
        cout << "Choose bank service" << endl;
        cout << endl;
        cout << "[0] Exit" << endl;
        cout << "[1] Deposit" << endl;
        cout << "[2] Withdraw" << endl;
        cout << "[3] Check account" << endl;

        cin >> service;

        switch (service) {
            case 0:
                cout << "End program...";
                return 0;

            case 1: {
                int amount;

                cout << "Enter amount to deposit" << endl; cin >> amount;

                deposit(amount);
                break; }
            
            case 2: {
                int amount;

                cout << "Enter amount to withdraw" << endl; cin >> amount;

                withdraw(amount);
                break; }
            
            case 3: {
                int balance = check();

                cout << "Your account's balance is " << balance << endl;
                break; }

            default:
                cout << "Invalid option" << endl;
                break; } }

    return 0; }