#include "Publication.h"
#include "Sales.h"
#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

//Define the function getData to get the publication, sales, and page count

// Prompts the user to input the Book's publication, sales and page count
void Book::getData() {
	
	// Calls getData() from Publication and sales to get the corresponding values
	Publication::getData();
	Sales::getData();
	
	// Prompts the user to input the page count and store it 
	cout << "Enter the page count: " << endl;
	cin >> pageCount;
	
	// Clear the input buffer
	cin.ignore();
	
}

//Define the function putData to display the publication, sales, and page count

// Displays the Book's data to the user
void Book::putData() {
	
	// Calls putData() from Publication and Sales to output the corresponding data
	Publication::putData();
	Sales::putData();
	
	// Output the page count of the book
	cout << "The page count is: " << pageCount << endl;
	
}
