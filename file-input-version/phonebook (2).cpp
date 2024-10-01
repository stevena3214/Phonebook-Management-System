
#include "CongressPerson.h"
#include "phonebook.h"
#include <iostream>
using namespace std;

PhoneBook::PhoneBook()
{
	capacity = 550;
	numContacts = 0;
	contacts = new CongressPerson[capacity];
}

PhoneBook::PhoneBook(const PhoneBook& original) {
	numContacts = original.numContacts;
	capacity = original.capacity;
	contacts = new CongressPerson[capacity];
	for (int i = 0; i < numContacts; i++) {
		contacts[i] = original.contacts[i];
	}
}

PhoneBook& PhoneBook::operator=(const PhoneBook& original) {
	if (this != &original) {
		delete[] contacts;
		capacity = original.capacity;
		numContacts = original.numContacts;
		contacts = new CongressPerson[capacity];

		for (int i = 0; i < numContacts; i++) {
			contacts[i] = original.contacts[i];
		}
	}
	return *this;
}
// deletes dynamically allocated storage

PhoneBook::~PhoneBook() {
	delete[] contacts;
}
//adds person to phonebook

void PhoneBook::add(CongressPerson person) {
	if (numContacts >= capacity) {
		cout << "PhoneBook is full. Cannot add more contacts." << endl;
		return;
	}
	contacts[numContacts] = person;
	numContacts++;
}
//displays people in the 

void PhoneBook::display() const {
	for (int i = 0; i < numContacts; i++) {
		cout << endl;
		contacts[i].display();
		cout << endl;
	}
}

//takes in a phone number and searchs the vector for the same number

void PhoneBook::searchNum(string inPhonenumber) {
	int index = binarySearch(0, numContacts - 1, inPhonenumber);
	if (index != -1) {
		cout << contacts[index];
	}
	else {
		cout << "Person not found" << endl;
	}
}


void PhoneBook::edit(string inPhoneNumber, string inFirstName, string inLastName) {
	bool found = false;
	for (int i = 0; i < numContacts; i++) {
		if (this->contacts[i].getPhonenumber() == inPhoneNumber) {
			this->contacts[i].setFirstname(inFirstName);
			this->contacts[i].setLastname(inLastName);
			found = true;
			break;
		}
	}
}

void PhoneBook::sort() {
		CongressPerson temp;
		int i, j;
		bool continueSorting = true;
		for (i = 0; i < numContacts - 1 && continueSorting; i++) {
			continueSorting = false;
			for (j = 0; j < numContacts - i - 1; j++) {
				if (contacts[j] > contacts[j + 1]) {
					temp = contacts[j];
					contacts[j] = contacts[j + 1] ;
					contacts[j + 1] = temp;
					continueSorting = true;
				}
			}
		}
}
template <typename TypeVal>
int PhoneBook::binarySearch(int low, int high, TypeVal any) {

	

	while (low <= high) {
		int mid = low + (high - low) / 2;

		if (contacts[mid] == any) {
			return mid; // Found the key
		}
		else if (contacts[mid] < any) {
			low = mid + 1; // Search the right half
		}
		else {
			high = mid - 1; // Search the left half
		}
	}

	return -1; // Key not found
}
