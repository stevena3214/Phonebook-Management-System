#pragma once
#include <vector>
#include "person.h"
#include <iostream>
using namespace std;

class PhoneBook {
public:
	PhoneBook();  //defulat constructor
	PhoneBook(const PhoneBook& original); // copy constructor
	PhoneBook& operator=(const PhoneBook& original); // overloaded assignment operator
	~PhoneBook(); // destructor
	void edit(string, string, string);
	void display() const; //display function
	void add(Person); // add Person to PhoneBook
	void search(string); // search function
	bool commonsearch(string);
	
	

private:
	Person* contacts;
	int capacity;
	int numContacts;
	
	

};
