#include "Publication.h"
#include <iostream>
#include <string>
using namespace std;

// Define the function getData to get title and price

void Publication::getData() {
	
	cout << "Enter the title: " << endl;
	getline(cin, title);
	
	cout << "Enter the price: " << endl;
	cin >> price;
	
}

void Publication::putData() {
	
	cout << "The Title is: " << title << endl;
	cout << "The Price is: " << price << endl;
	
}
