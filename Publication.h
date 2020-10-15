#ifndef PUBLICATION_PUBLICATION_H
#define PUBLICATION_PUBLICATION_H
#include <iostream>
#include <string>
using namespace std;

class Publication {

	public:
		// Declare two functions getData and putData
		
		// Function to get the data from the user
		void getData();
		
		// Function to display the data
		void putData();
	   
	
		// Declare title and price
		string title;
		float price;
	
};
#endif //PUBLICATION_PUBLICATION_H
