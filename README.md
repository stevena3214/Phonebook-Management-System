# Phonebook-Management-System
  # Overview:
  
  This project is a PhoneBook management system that allows users to store, edit, search, and display contact information. The system is implemented using dynamically allocated arrays in C++. There are two versions of this project:

 Manual Entry Version: Users can manually input contact details into the phonebook.
 
 File Input Version: The phonebook is populated from a comma-delimited input file containing contact information, including fields such as name, birthday, gender, state, party affiliation, and phone number.
 
 Both versions of the program support core features like displaying all contacts, searching by phone number, and editing contact information.

 # Features:
 
 Dynamic Storage: Both versions of the phonebook utilize dynamically allocated arrays to store contacts. The size of the array grows as needed.
 
 Copy Constructor and Destructor: The project includes a copy constructor for deep copying, and a destructor to release dynamic memory when the phonebook is destroyed.
 
 Overloaded Assignment Operator: An overloaded assignment operator ensures proper deep copying between phonebook objects.
 
 Search: Users can search for a contact by phone number.
 
 Bubble Sort: In the file-based version, contacts can be sorted by phone number using a bubble sort algorithm.
 
 Templated Recursive Binary Search: A recursive binary search is implemented to efficiently find contacts based on their phone number.
 
 Overloaded Operators: The program uses overloaded comparison operators (==, <, <=, >=) for comparison between contacts, and the << operator to print contact details.

 # File Input Version Details:

The file input version reads contact information from a comma-delimited text file (with a .txt extension). Each line contains details of a person, and fields are separated by commas.

 # Example Input File (inputfile.txt):

"Casey,Robert,P.,Jr.,Bob,"Robert P. Casey Jr.",4/13/1960,M,sen,PA,,1,Democrat,https://www.casey.senate.gov,393 Russell Senate Office Building Washington DC 20510,202-224-6324

Brown,Sherrod,,,,Sherrod Brown,11/9/1952,M,sen,OH,,1,Democrat,https://www.brown.senate.gov,503 Hart Senate Office Building Washington DC 20510,202-224-2315"

# Command Line Argument:

To run the file-based version, provide the text file name as a command-line argument:

./PhoneBook CongressContacts.txt

This will read the contact data from the text file and populate the phonebook dynamically. Be sure to format the .txt file with commas separating each field, as shown in the example.

 # Manual Entry Version Details

The manual entry version prompts users to add contacts directly by entering details through the program interface. This version includes similar functionalities to the file input version but requires the user to input contacts one by one.

# Menu Options

Both versions include the following menu options:

Display Contacts: Show all stored contacts.

Add Contact: Add a new contact to the phonebook.

Search by Phone Number: Find a contact by their phone number.

Edit Contact: Edit the details of an existing contact.

Prove Copy Constructor: Demonstrates that the copy constructor works by copying a phonebook and showing both the original and copied versions.

Prove Assignment Operator: Demonstrates that the overloaded assignment operator works by assigning one phonebook to another and showing the results.

Exit: Exit the program.

# Extra Features (File Input Version)

Bubble Sort: Sorts contacts by phone number using an improved bubble sort algorithm.

Recursive Binary Search: A templated recursive binary search is used to find contacts by phone number efficiently.

Overloaded Operators: Operators such as ==, <, <=, >=, and << are overloaded to support comparisons and formatted output of contact details.

# Output

The program provides output for all menu choices selected by the user.
