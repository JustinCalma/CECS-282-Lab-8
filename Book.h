//Class Book is created from classes Publication and Sales

#ifndef PUBLICATION_BOOK_H
#define PUBLICATION_BOOK_H
#include "Publication.h"
#include "Sales.h"

//In this class you need to declare two functions getData and putData and a data member for page count

// Create a Book class that is a child of Publication and Sales
class Book : public Publication, Sales {
	
	// Declare public methods and attributes
	public:
		void getData();
		void putData();
		
		int pageCount;
	
};

#endif //PUBLICATION_BOOK_H
