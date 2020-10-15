#include "Digital.h"
#include <iostream>
#include <iostream>
#include <string>
using namespace std;

//Define the functions getData to input publication, storage and  three months of sales

void Digital::getData() {
	
	Publication::getData();
	
	cout << "Enter the storage: " << endl;
	cin >> storage;
	
	Sales::getData();
	
}

//Define the function putData to display the publication, storage and three months of sales

void Digital::putData() {
	
	Publication::putData();
	
	cout << "The storage is: " << storage << endl;
	
	Sales::putData();
	
}
