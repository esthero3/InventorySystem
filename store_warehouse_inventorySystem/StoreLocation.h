#ifndef STORELOCATION_H
#define STORELOCATION_H

#include "Location.h"

class StoreLocation: public Location {
    public:
        StoreLocation();
        ~StoreLocation();
        
        //member functions
        void setProduct(string);
        int getFreeSpace() const;
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