// Justin Calma
// CECS 282 Lab 8

#include "Sales.h"
#include "Publication.h"
#include "Book.h"
#include "Digital.h"
#include <iostream>
#include <string>
using namespace std;

// Definition of the main method
int main() {

	// Create objects of type Book and Digital
    Book book;
    Digital digital;

	// Get the data of object book from the user and output it 
    book.getData();
    book.putData();

    cout << endl;

	// Get the data of object digital from the user and output it 
    digital.getData();
    digital.putData();

    cout << endl;

	// Return 0 to main
    return 0;

}
