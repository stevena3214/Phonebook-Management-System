#pragma once

#pragma once
#include "CongressPerson.h"
#include <iostream>
using namespace std;

class PhoneBook {
public:
	PhoneBook(); //defulat constructor
	PhoneBook(const PhoneBook& original); // copy constructor
	PhoneBook& operator=(const PhoneBook& original); // overloaded assignment operator
	~PhoneBook(); // destructor
	void edit(string, string, string);
	void display() const; //display function
	void add(CongressPerson); // add Person to PhoneBook
	void searchNum(string); // search function 
	void sort();
	
	
	



private:
	CongressPerson* contacts;
	int capacity;
	int numContacts;
	template <typename TypeVal>
	int binarySearch(int low, int high, TypeVal any);
	
};