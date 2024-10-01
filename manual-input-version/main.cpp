
#include <iostream>
#include "person.h"
#include "phonebook.h"
int main()
{
    //Below are instances of the Person Class
    Person person1("James", "Lebron", "888-888-8888");
    Person person2("Durant", "Kevin", "777-777-7777");
    Person person3("Leonard", "Kawhi", "999-999-9999");
    Person person4("Irving", "Kyrie", "222-222-222");
    Person person5("Curry", "Stephen", "333-333-3333");

    PhoneBook myPhonebook;

    //Below we add the objects from Person into the PhoneBook object
    myPhonebook.add(person1);
    myPhonebook.add(person2);
    myPhonebook.add(person3);
    myPhonebook.add(person4);
    myPhonebook.add(person5);

    PhoneBook backupPhonebook;
    backupPhonebook = myPhonebook;
    PhoneBook copyPhonebook(myPhonebook);

    //Below is the code for the menu which contains options that the user can choose from
    while (true) {
        char selection;
        cout << "Welcome To The Phonebook" << endl;
        cout << "Please Select From The Following" << endl;
        cout << "A. Display" << endl;
        cout << "B. Add" << endl;
        cout << "C. Search" << endl;
        cout << "D. Edit" << endl;
        cout << "E. Prove Overloaded Operator" << endl;
        cout << "F. Prove Copy Constructor" << endl;
        cout << "G. Exit" << endl;
        cout << "Enter Here: ";
        cin >> selection;

        switch (selection)
        {
        case 'A':
        case 'a':
        {
            cout << endl;
            myPhonebook.display();
            break;
        }
        case 'B':
        case 'b':
        {
            string lastName;
            string firstName;
            string phoneNumber;
            cout << endl;
            cout << "Enter Last Name: ";
            cin >> lastName;
            cout << endl;
            cout << "Enter First Name: ";
            cin >> firstName;
            cout << endl;
            cout << "Enter Phone Number (***-***-****): ";
            cin >> phoneNumber;
            Person newPerson(lastName, firstName, phoneNumber);
            myPhonebook.add(newPerson);
            break;
        }
        case 'C':
        case 'c':
        {
            string inPhonenumber;
            cout << endl;
            cout << "Enter Phone Number (***-***-****): ";
            cin >> inPhonenumber;
            myPhonebook.search(inPhonenumber);

            break;
        }
        case 'D':
        case 'd':
        {
            string newFirstname;
            string newLastname;
            string phoneNumber;
            cout << endl;
            cout << "Enter the phone number for the name you would like to edit: ";
            cin >> phoneNumber;
            if (!myPhonebook.commonsearch(phoneNumber)) {
                cout << "Person with phone number " << phoneNumber << " not found." << endl;
                break;
            }
            cout << endl;
            cout << "Enter a new first name: ";
            cin >> newFirstname;
            cout << endl;
            cout << "Enter a new last name: ";
            cin >> newLastname;
            cout << endl;
            myPhonebook.edit(phoneNumber, newFirstname, newLastname);
            cout << endl;
            myPhonebook.display();


            break;
        }
        case 'E':
        case 'e': {
            string newFirstname;
            string newLastname;
            string phoneNumber;
            cout << endl;
            cout << "Enter the phone number for the name you would like to edit: ";
            cin >> phoneNumber;
            if (!myPhonebook.commonsearch(phoneNumber)) {
                cout << "Person with phone number " << phoneNumber << " not found." << endl;
                break;
            }
            cout << endl;
            cout << "Enter a new first name: ";
            cin >> newFirstname;
            cout << endl;
            cout << "Enter a new last name: ";
            cin >> newLastname;
            cout << endl;
            myPhonebook.edit(phoneNumber, newFirstname, newLastname);
            cout << endl;
            myPhonebook.display();
            cout << endl;
            cout << "Testing Overloaded Operator" << endl;
            backupPhonebook.display();
            break;
        }

        case 'F':
        case 'f':
        {
            string newFirstname;
            string newLastname;
            string phoneNumber;
            cout << endl;
            cout << "Enter the phone number for the name you would like to edit: ";
            cin >> phoneNumber;
            if (!myPhonebook.commonsearch(phoneNumber)) {
                cout << "Person with phone number " << phoneNumber << " not found." << endl;
                break;
            }
            cout << endl;
            cout << "Enter a new first name: ";
            cin >> newFirstname;
            cout << endl;
            cout << "Enter a new last name: ";
            cin >> newLastname;
            cout << endl;
            myPhonebook.edit(phoneNumber, newFirstname, newLastname);
            cout << endl;
            myPhonebook.display();
            cout << endl;
            cout << "Testing Copy Constructor" << endl;
            copyPhonebook.display();

            break;
        }

        case 'G':
        case 'g':
        {
            cout << endl;
            cout << "Bye!" << endl;
            exit(0);
            break;
        }

        default:
        {
            cout << "Invalid Selection. Try Again" << endl;
            break;
        }

        }

        char choice;
        cout << endl;
        cout << "Do you want to return to the menu? (Y/N): ";
        cin >> choice;
        if (choice != 'Y' && choice != 'y') {
            cout << "Bye!" << endl;
            break; // Exit the loop if the user chooses not to continue
        }
        else {
            cout << endl;
        }








    }
}