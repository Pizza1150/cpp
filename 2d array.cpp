#include <iostream>



using namespace std;



void display() {
	cout << "Display number example :" << endl;
	cout << endl;

	int numbers[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9} };

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {
			cout << "{" << numbers[i][j] << "}"  << " "; }

		cout << endl; } }



void sum() {
	int sum = 0;

	cout << "Sum number example :" << endl;
	cout << endl;

	int numbers[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9} };

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) { 
			sum += numbers[i][j]; 
			cout << numbers[i][j] << " + "; } }
			
	cout << "= " << sum << endl; }



void min() {
	cout << "Find min number example :" << endl;
	cout << endl;

	int numbers[3][3] = {
		{7, 8, 9},
		{4, 5, 6},
		{1, 2, 3} };

	int min = numbers[0][0]; // เริ่มต้นด้วยอาเรย์แรกที่พบ

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) { min = (numbers[i][j] < min) ? numbers[i][j] : min; } }
			
	cout << "Min number is " << min << endl; }



void max() {
	cout << "Find max number example :" << endl;
	cout << endl;

	int numbers[3][3] = {
		{7, 8, 9},
		{4, 5, 6},
		{1, 2, 3} };

	int max = numbers[0][0]; // เริ่มต้นด้วยอาเรย์แรกที่พบ

	for (int i = 0; i < 3 ; i++) {

		for (int j = 0; j < 3; j++) { max = (numbers[i][j] > max) ? numbers[i][j] : max; } }

	cout << "Max number is " << max << endl; }



int main() {
	int task;

	while (true) {
		cout << endl;

		cout << "Choose 2D array task" << endl;
		cout << "[0] End program" << endl;
		cout << "[1] Display" << endl;
		cout << "[2] Sum" << endl;
		cout << "[3] Min" << endl;
		cout << "[4] Max" << endl;

		cout << endl;

		cin >> task;

		switch (task) {
			case 0:
				cout << "End program..." << endl;
				return 0;

			case 1:
				display();
				break;

			case 2:
				sum();
				break;

			case 3:
				min();
				break;
			
			case 4:
				max();
				break;
			
			default:
				cout << "Invalid task" << endl;
				break; } }

    return 0; }