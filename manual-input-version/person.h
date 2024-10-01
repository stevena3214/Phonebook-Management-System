#pragma once
#include <string>
#include <iostream>
using namespace std;

class Person {
public:
	Person(); // default constructor
	Person(string, string, string); // constructor that takes in the last name, first name, and phone number
	string getLastname() const; // get last name
	string getFirstname() const; // get first name
	string getPhonenumber() const; // get phone number
	void setLastname(string); //set last name
	void setFirstname(string); // set first name
	void setPhonenumber(string); // set phone number
	void display() const; // display

private:
	string lastName;
	string firstName;
	string phoneNumber;

};

