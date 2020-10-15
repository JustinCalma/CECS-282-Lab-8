#include "Sales.h"
#include <iostream>
#include <string>
using namespace std;

// Define the function getData to input sales for three months
void Sales::getData() {
	
	cin.precision(10);
	
	float data;
	
	for (int i = 0; i < 3; i++) {
		cout << "Input the data for month " << i << endl;
		cin >> data;
		saleArray[i] = data;
	}
	
}

// Define the function putData to display three months of sales
void Sales::putData() {
	
	for (int i = 0; i < 3; i++) {
		cout << "Month " << i << ": " << saleArray[i] << endl;
	}
	
}

