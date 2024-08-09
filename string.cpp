#include <iostream>
//#include <string>



using namespace std;



void length() {
	string word;

	cout << "Enter a word... "; cin >> word;
	cout << word << "'s length is " << word.length() << endl;
	//cout << word << "'s length is " << word.size() << endl;
	cout << endl; }



void append() {
	string word1, word2;

	cout << "Enter 1st word... "; cin >> word1;
	cout << "Enter 2nd word... "; cin >> word2;
	cout << word1.append(word2) << endl;
	//cout << word1 + word2 << endl;
	cout << endl; }



void insert() {
	string word;
	string insert;

	int index;
	int length;

	cout << "Enter a word... "; cin >> word;

	length = word.length();

	// Index
	cout << "Choose index to insert" << endl;
	
	for (int i = 0; i < length; i++) { cout << "   [" << i << "]" << word[i] << endl; }

	cout << endl;
	
	while (true) {
		cout << "Enter the index..."; cin >> index;

		if (index < 0 || index > length) { cout << "Invald index!" << endl; }

		else { break; } }

	// Insert
	cout << "Enter a word to insert... "; cin >> insert;

	word.insert(index, insert);

	cout << "Here is the new word: " << word << endl;
	
	cout << endl; }



void replace() {
	string word, old_word, new_word;
	size_t pos;

	cout << "Enter the word... "; cin >> word;

	while (true) {
		cout << "Enter the word to replace... "; cin >> old_word;

		pos = word.find(old_word); // หาตำแหน่งของ old_word ใน original_word

		if (pos != string::npos) { break; }

		else { cout << "Not found " << old_word << " in the original word!" << endl; } }

	cout << "Enter the new word... "; cin >> new_word;

	word.replace(pos, old_word.length(), new_word);
	cout << "Here is the new word: " << word << endl;

	cout << endl; }



int main() {
	int task;

	while (true) {
		cout << "Select string tasks:" << endl;
		cout << endl;
		cout << "[0] Exit" << endl;
		cout << "[1] Length" << endl;
		cout << "[2] Append" << endl;
		cout << "[3] Insert" << endl;
		cout << "[4] Replace" << endl;

		cin >> task;

		switch (task) {
			case 0:
				cout << "End program ..." << endl;
				return 0;

			case 1:
				length();
				break;

			case 2:
				append();
				break;
			
			case 3:
				insert();
				break;
			
			case 4:
				replace();
				break;

			default:
				cout << "Invalid task!" << endl;
				break; } }

    return 0; }