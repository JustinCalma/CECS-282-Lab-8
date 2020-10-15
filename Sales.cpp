#include "Sales.h"
#include <iostream>
#include <string>
using namespace std;

// Define the function getData to input sales for three months

// Prompt the user to input the sales for 3 months
void Sales::getData() {
	
	// Set the precision of the input
	cin.precision(10);
	
	// Declare the variable that will store the inputted value
	float data;
	
	// For 3 iterations, prompt the user to input the sales for the corresponding month
	for (int i = 0; i < 3; i++) {
		cout << "Input the data for month " << i << endl;
		cin >> data;
		saleArray[i] = data;
	}
	
}

// Define the function putData to display three months of sales

// Display the data to the user
void Sales::putData() {
	
	// For 3 iterations, output the data corresponding to the month
	for (int i = 0; i < 3; i++) {
		cout << "Month " << i << ": " << saleArray[i] << endl;
	}
	
}

