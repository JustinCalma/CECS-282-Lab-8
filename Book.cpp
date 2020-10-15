#include "Publication.h"
#include "Sales.h"
#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

//Define the function getData to get the publication, sales, and page count

void Book::getData() {
	
	Publication::getData();
	Sales::getData();
	
	cout << "Enter the page count: " << endl;
	cin >> pageCount;
	
	cin.ignore();
	
}

//Define the function putData to display the publication, sales, and page count

void Book::putData() {
	
	Publication::putData();
	Sales::putData();
	
	cout << "The page count is: " << pageCount << endl;
	
}
