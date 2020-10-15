#ifndef PUBLICATION_DIGITAL_H
#define PUBLICATION_DIGITAL_H
#include "Publication.h"
#include "Sales.h"

//Class Digital is created from classes Publication and Sales
//In this class you need to declare two functions getData and putData and a data member for storage

 class Digital : public Publication, Sales {
	
	public:
		void getData();
		void putData();
		
		int storage;

 };
#endif //PUBLICATION_DIGITAL_H
