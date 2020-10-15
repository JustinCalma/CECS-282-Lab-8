#ifndef PUBLICATION_SALE_H
#define PUBLICATION_SALE_H
#include <iostream>
using namespace std;

// Create a base class Sales
class Sales {

	// Declare the public methods and attribute
	public:
		// Declare functions getData and putData
		
		// Function to get the data from the user
		void getData();
		
		// Function to display the data
		void putData();

		// Declare an array to store sales for three months
    	float saleArray[3]; 

};

#endif //PUBLICATION_SALE_H
