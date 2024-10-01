#include "person.h"
#include "phonebook.h"
#include <vector>
#include <iostream>
using namespace std;

//constructor
PhoneBook::PhoneBook()
{
	capacity = 20;
	numContacts = 0;
	contacts = new Person[capacity];
}

PhoneBook::PhoneBook(const PhoneBook& original) {
	numContacts = original.numContacts;
	capacity = original.capacity;
	contacts = new Person[capacity];
	for (int i = 0; i < numContacts; i++) {
		contacts[i] = original.contacts[i];
	}
}



PhoneBook& PhoneBook::operator=(const PhoneBook& original) {
	if (this != &original) {
		delete[] contacts; 

		capacity = original.capacity; 
		numContacts = original.numContacts; 
		contacts = new Person[capacity]; 

	
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
void PhoneBook::add(Person person) {
	if (numContacts >= capacity) {
		cout << "PhoneBook is full. Cannot add more contacts." << endl;
		return;
	}
	contacts[numContacts] = person;
	numContacts++;
	
}

//displays people in the vector
void PhoneBook::display() const {
	for (int i = 0; i < numContacts; i++) {
		cout << endl;
		contacts[i].display();
		cout << endl;
	}
}

bool PhoneBook::commonsearch(string inPhoneNumber) {
	bool found = false;
	for (int i = 0; i < numContacts; i++) {
		if (this->contacts[i].getPhonenumber() == inPhoneNumber) {
			found = true;
			break;
		}
	}
	return found;
}

//takes in a phone number and searchs the vector for the same number
void PhoneBook::search(string inPhonenumber) {

	bool found = false;
	for (int i = 0; i < numContacts; i++) {
		if (this -> contacts[i].getPhonenumber() == inPhonenumber) {
			contacts[i].display();
			found = true;
			break;
		}
	}
	if (!found) {
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



