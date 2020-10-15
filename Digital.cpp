#include "Digital.h"
#include <iostream>
#include <iostream>
#include <string>
using namespace std;

//Define the functions getData to input publication, storage and  three months of sales

// Prompts the user to input the publication, storage and sales data
void Digital::getData() {
	
	// Calls getData() from Publication and gets the publication data
	Publication::getData();
	
	// Prompts the user to input the amount of storage
	cout << "Enter the storage: " << endl;
	cin >> storage;
	
	// Calls getData() from Sales and gets the sales data for 3 months
	Sales::getData();
	
}

//Define the function putData to display the publication, storage and three months of sales

// Displays the data of class Digital
void Digital::putData() {
	
	// Calls putData() from Publication to output the publication data of Digital
	Publication::putData();
	
	// Output the storage to the user
	cout << "The storage is: " << storage << endl;
	
	// Calls putData() from Sales to output to sales data of Digital
	Sales::putData();
	
}
