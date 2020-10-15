#include "Publication.h"
#include <iostream>
#include <string>
using namespace std;

// Define the function getData to get title and price

// Prompt the user to input the title and price 
void Publication::getData() {

	// Prompt the user for the title	
	cout << "Enter the title: " << endl;
	getline(cin, title);
	
	// Prompt the user for the price
	cout << "Enter the price: " << endl;
	cin >> price;
	
}

// Output to the user the Publication data
void Publication::putData() {
	
	// Output the title and price 
	cout << "The Title is: " << title << endl;
	cout << "The Price is: " << price << endl;
	
}
