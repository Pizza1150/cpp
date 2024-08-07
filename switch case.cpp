#include <iostream>



using namespace std;



void selectService(int service) {
	switch (service) {
		case 0:
			cout << "Exit the service, Thank you" << endl;
			break;

		case 1:
			cout << "Welcome to withdraw service :)" << endl;
			break;
		
		case 2:
			cout << "Welcome to deposit service :)" << endl;
			break;

		default:
			cout << "This is invalid service" << endl;
			break; } }



int main() {
	int service;

	while (true) {
		cout << "Choose a service" << endl;
		cout << "[0] Exit the program" << endl;
		cout << "[1] Withdraw" << endl;
		cout << "[2] Deposit" << endl;

		cin >> service;

		if (service == 0) {
			selectService(service);
			break; }
			
		else { 
			selectService(service); }
	}
    return 0; }