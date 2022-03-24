#ifndef WHLOCATION_H
#define WHLOCATION_H

#include "Location.h"

class WHLocation: public Location {
    public:
        WHLocation();
        ~WHLocation();


        //member functions
        virtual int getCapacity() const;
        virtual bool add(string name, int quan); //add the given product (name) and quantity to the store's location
        virtual bool remove(int amount);
        void print() const;

    private:
        static const char code;
        static const int capacity;
        static int nextId;
};
#endif