#include <iostream>

using namespace std;

int main() {
	int numbers[] = {10, 20 ,30 ,40, 50};
	int sum = 0;
	// string students[] = {"mart", "pizza", "ricky", "delta"};

	for (int i : numbers) {
		sum += i; }

	cout << "Total is " << sum << endl;

	// for (string n : students) {
	// 	cout << n << endl;
	// }

	return 0; }