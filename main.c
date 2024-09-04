#include<stdio.h> 
#include <stdlib.h> 
#include <string.h> 
// Define a structure for a contact 
struct Contact { 
 char Name; 
 int Phoneno; 
 char Address; 
 char Email; 
}; 
// Function to add a new contact to the database 
void addContact(struct Contact *database, int *numContacts) { 
 printf("\nEnter Name: "); 
 scanf("%s", &database[*numContacts].Name); 
 printf("\nEnter Phoneno: "); 
 scanf("%s", &database[*numContacts].Phoneno); 
 printf("\nEnter Address: "); 
 scanf("%s", &database[*numContacts].Address); 
 printf("\nEnter Email: "); 
 scanf("%s", &database[*numContacts].Email); 
 (*numContacts)++; 
 printf("Contact added successfully!\n"); 
} 
// Function to display all contact in the database 
void displayContact(const struct Contact *database, int numContact) { 
 printf("\nContact Database:\n"); 
 printf("Name\tPhoneno\t\tAddress\tEmail\n"); 
 for (int i = 0; i < numContact; i++) { 
 printf("%c\t\t%d\t\t%c\t%c\n", 
 database[i].Name, database[i].Name, 
 database[i].Phoneno, database[i].Phoneno); 
 } 
} 
int main() { 
 // Maximum number of contact in the database 
 const int maxContact = 100; 
 // Array to store contact information 
 struct Contact contactDB[maxContact]; 
 // Variable to keep track of the number of contact in the database 
 int numContact = 0; 
 int choice; 
 do { 
 // Display menu 
 printf("\nContact Database Management System\n"); 
 printf("1. Add Contact \n"); 
 printf("2. Display Contact\n"); 
 printf("3. Exit\n"); 
 printf("Enter your choice: "); 
 scanf("%d", &choice); 
 switch (choice) { 
 case 1: 
 addContact(contactDB, &numContact); 
 break; 
 case 2: 
 displayContact(contactDB, numContact); 
 break; 
 case 3: 
 printf("Exiting the program. Goodbye!\n"); 
 break; 
 default: 
 printf("Invalid choice. Please enter a valid option.\n"); 
 } 
 } while (choice != 3); 
 return 0; 
} 
