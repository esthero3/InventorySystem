
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

#include "defs.h"
#include "Queue.h"
#include "StoreLocation.h"

using namespace std;

class Product {
		
	public:
		//constructor
		Product(const string& name, StoreLocation* sloc);
		
		//destructor
		~Product();
		
		//getters and setters
		const string& getName();
		StoreLocation* getStoreLocation() const;
		void setStoreLocation(StoreLocation*);
		void addWHLocation(WHLocation*);

		// These have been done for you. They are documented 
		// in the assignment specification.
		void getFromStoreLocation(int& quantity) const;
		void getFromWHLocations(int& quantity) const;
		void fillOrder(int& quantity);
		void stockStoreLocation();
		void print() const;

	private:
		string name;
		StoreLocation* storeLocation;
		Queue* whLocations;
		
};
#endif
