#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "CongressPerson.h"
#include "phonebook.h"
using namespace std;
int main(int argc, char* argv[]) {
	string file_name = argv[1];
	ifstream fin(file_name);
	if (!fin.is_open()) {
		std::cout << "File not found.";
		return 1;
	}
	string last_name, first_name, middle_name, suffix, nickname, full_name, birthday,
		gender, type, state, district, senate_class, party, url, address, phone;
	string header;

	PhoneBook CongressPeople;
	getline(fin, header);
	string line;
	while (getline(fin, line)) {
		istringstream ss(line);
		getline(ss, last_name, ',');
		getline(ss, first_name, ',');
		getline(ss, middle_name, ',');
		getline(ss, suffix, ',');
		getline(ss, nickname, ',');
		getline(ss, full_name, ',');
		getline(ss, birthday, ',');
		getline(ss, gender, ',');
		getline(ss, type, ',');
		getline(ss, state, ',');
		getline(ss, district, ',');
		getline(ss, senate_class, ',');
		getline(ss, party, ',');
		getline(ss, url, ',');
		getline(ss, address, ',');
		getline(ss, phone, ',');
		CongressPerson person(last_name, first_name, middle_name, suffix, nickname, full_name,
			birthday, gender, type, state, district, senate_class, party,
			url, address, phone);
		CongressPeople.add(person);
	}
	fin.close();
	CongressPeople.sort();
	while(true) {
		char selection;
		std::cout << "Welcome To The Phonebook" << endl;
		std::cout << "Please Select From The Following" << endl;
		std::cout << "A. Search" << endl;
		std::cout << "B. Exit" << endl;
		std::cin >> selection;
		switch (selection)
		{
		case 'A':
		case 'a':
		{
			string inPhonenumber;
			std::cout << "Enter Phone Number (***-***-****): ";
			std::cin >> inPhonenumber;
			CongressPeople.searchNum(inPhonenumber);
			break;
		}
		case 'B':
		case 'b':
		{
			std::cout << "Bye!" << endl;
			exit(0);
		}
		default:
		{
			std::cout << "Invalid Selection. Try Again" << endl;
		}
		}
		char choice;
		std::cout << "Do you want to return to the menu? (Y/N): ";
		std::cin >> choice;
		if (choice != 'Y' && choice != 'y') {
			std::cout << "Bye!" << endl;
			break; // Exit the loop if the user chooses not to continue
		}

	}

}
