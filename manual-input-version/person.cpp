#include "person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person() : lastName("NULL"), firstName("NULL"), phoneNumber("NULL") {}
Person::Person(string inlastName, string infirstName, string inphoneNumber) : lastName(inlastName), firstName(infirstName), phoneNumber(inphoneNumber) {}
string Person::getLastname() const {
	return lastName;
}
string Person::getFirstname() const {
	return firstName;
}
string Person::getPhonenumber() const {
	return phoneNumber;
}
void Person::setLastname(string inlastName) {
	lastName = inlastName;
}
void Person::setFirstname(string infirstName) {
	firstName = infirstName;
}
void Person::setPhonenumber(string inphoneNumber) {
	phoneNumber = inphoneNumber;
}
void Person::display() const {
	cout << "Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "Phone Number: " << phoneNumber << endl;
}