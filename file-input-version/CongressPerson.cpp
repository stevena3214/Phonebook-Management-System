
#include "CongressPerson.h"
#include <iostream>
#include <string>
using namespace std;

// Default constructor
CongressPerson::CongressPerson() : lastName("NULL"), firstName("NULL"), middleName("NULL"), suffix("NULL"),
nickname("NULL"), fullName("NULL"), birthday("NULL"), gender("NULL"),
type("NULL"), state("NULL"), district("NULL"), senate_class("NULL"),
party("NULL"), url("NULL"), address("NULL"), phoneNumber("NULL") {}

// Constructor with parameters
CongressPerson::CongressPerson(string inlastName, string infirstName, string inmiddleName, string inSuffix,
    string inNickname, string infullName, string inBirthday, string inGender,
    string inType, string inState, string inDistrict, string inSenate_Class,
    string inParty, string inURL, string inAddress, string inPhoneNumber): 
    lastName(inlastName), firstName(infirstName), middleName(inmiddleName),
    suffix(inSuffix), nickname(inNickname), fullName(infullName), birthday(inBirthday),
    gender(inGender), type(inType), state(inState), district(inDistrict),
    senate_class(inSenate_Class), party(inParty), url(inURL), address(inAddress),
    phoneNumber(inPhoneNumber) {}


string CongressPerson::getLastname() const {
    return lastName;
}

string CongressPerson::getFirstname() const {
    return firstName;
}

string CongressPerson::getMiddlename() const {
    return middleName;
}

string CongressPerson::getSuffix() const {
    return suffix;
}

string CongressPerson::getNickname() const {
    return nickname;
}

string CongressPerson::getFullname() const {
    return fullName;
}

string CongressPerson::getBirthday() const {
    return birthday;
}

string CongressPerson::getGender() const {
    return gender;
}

string CongressPerson::getType() const {
    return type;
}

string CongressPerson::getState() const {
    return state;
}

string CongressPerson::getDistrict() const {
    return district;
}

string CongressPerson::getSenate_Class() const {
    return senate_class;
}

string CongressPerson::getParty() const {
    return party;
}

string CongressPerson::getURL() const {
    return url;
}

string CongressPerson::getAddress() const {
    return address;
}

string CongressPerson::getPhonenumber() const {
    return phoneNumber;
}

// Setters
void CongressPerson::setLastname(string lastName) {
    this->lastName = lastName;
}

void CongressPerson::setFirstname(string firstName) {
    this->firstName = firstName;
}

void CongressPerson::setMiddlename(string middleName) {
    this->middleName = middleName;
}

void CongressPerson::setSuffix(string suffix) {
    this->suffix = suffix;
}

void CongressPerson::setNickname(string nickname) {
    this->nickname = nickname;
}

void CongressPerson::setFullname(string fullName) {
    this->fullName = fullName;
}

void CongressPerson::setBirthday(string birthday) {
    this->birthday = birthday;
}

void CongressPerson::setGender(string gender) {
    this->gender = gender;
}

void CongressPerson::setType(string type) {
    this->type = type;
}

void CongressPerson::setState(string state) {
    this->state = state;
}

void CongressPerson::setDistrict(string district) {
    this->district = district;
}

void CongressPerson::setSenate_Class(string senate_class) {
    this->senate_class = senate_class;
}

void CongressPerson::setParty(string party) {
    this->party = party;
}

void CongressPerson::setURL(string url) {
    this->url = url;
}

void CongressPerson::setAddress(string address) {
    this->address = address;
}

void CongressPerson::setPhonenumber(string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void CongressPerson::display() const {
    cout << "Last Name: " << lastName << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Middle Name: " << middleName << endl;
    cout << "Suffix: " << suffix << endl;
    cout << "Nickname: " << nickname << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "Birthday: " << birthday << endl;
    cout << "Gender: " << gender << endl;
    cout << "Type: " << type << endl;
    cout << "State: " << state << endl;
    cout << "District: " << district << endl;
    cout << "Senate Class: " << senate_class << endl;
    cout << "Party: " << party << endl;
    cout << "URL: " << url << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phoneNumber << endl;
}
bool CongressPerson::operator==(const string other) const {
    
    return phoneNumber == other;
}

bool CongressPerson::operator<(const string other) const {
    return phoneNumber < other;
}

bool CongressPerson::operator>(const CongressPerson& other) const {
    return phoneNumber > other.phoneNumber;
}

bool CongressPerson::operator<=(const CongressPerson& other) const {
    
    return phoneNumber <= other.phoneNumber;
}

bool CongressPerson::operator>=(const CongressPerson& other) const {
    return phoneNumber >= other.phoneNumber;

}

 ostream& operator<<(ostream& out, const CongressPerson& person); {
    out << person.lastName << ' ' << person.firstName << ' ' << person.middleName << ' ' << person.suffix
        << ' ' << person.nickname << ' ' << person.fullName << ' ' << person.birthday << ' ' <<
        person.gender << ' ' << person.type << ' ' << person.state << ' ' << person.district
        << ' ' << person.senate_class << ' ' << person.party << ' ' << person.url
        << ' ' << person.address << ' ' << person.phoneNumber;
    return out;
}
