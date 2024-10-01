#pragma once

#pragma once
#include <string>
#include <iostream>
using namespace std;
class CongressPerson {
public:
	//Constructors
	CongressPerson(); 
	CongressPerson(string, string, string, string, string, string, string, string, string, string,
	string, string, string, string, string, string);
	
	//Getters
	string getLastname() const; 
	string getFirstname() const; 
	string getPhonenumber() const;
	string getMiddlename() const;
	string getSuffix() const;
	string getNickname() const;
	string getFullname() const;
	string getBirthday() const;
	string getGender() const;
	string getType() const;
	string getState() const;
	string getDistrict() const;
	string getSenate_Class() const;
	string getParty() const;
	string getURL() const;
	string getAddress() const;

	//Setters
	void setLastname(string); 
	void setFirstname(string); 
	void setPhonenumber(string); 
	void setMiddlename(string);
	void setSuffix(string);
	void setNickname(string);
	void setFullname(string);
	void setBirthday(string);
	void setGender(string);
	void setType(string);
	void setState(string);
	void setDistrict(string);
	void setSenate_Class(string);
	void setParty(string);
	void setURL(string);
	void setAddress(string);
	bool operator==(const string other) const;
	bool operator<(const string other) const;

	bool operator>(const CongressPerson& other) const;

	bool operator<=(const CongressPerson& other) const;

	bool operator>=(const CongressPerson& other) const;
	friend ostream& operator<<(ostream& out, const CongressPerson& person);
	//Display
	void display() const; 

private:
	string lastName;
	string firstName;
	string phoneNumber;
	string middleName;
	string suffix;
	string nickname;
	string fullName;
	string birthday;
	string gender;
	string type;
	string state;
	string district;
	string senate_class;
	string party;
	string url;
	string address;
};
