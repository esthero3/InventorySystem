#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>
#include "defs.h"
using namespace std;

class Location {
    public:
        Location(char, int);
        ~Location();
        //getters
        string getId() const;
        string getProduct() const;
        int getQuantity() const;

        //member functions
        bool isEmpty() const; //returns true quantity == 0, otherwise false
        bool isAvailable() const; //returns true if product == 'NONE', otherwise false
        void print() const;

        //virtuals -- wil be implemented in derived class(es)
        virtual int getCapacity() const=0;
        virtual bool add(string name, int quan)=0; //add the given product (name) and quantity to the store's location
        virtual bool remove(int amount)=0;

    protected:
        string id;
        string product;
        int quantity;
        static const string NONE;

};
#endif