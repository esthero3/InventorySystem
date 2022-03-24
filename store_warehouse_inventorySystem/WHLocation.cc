#include "WHLocation.h"

const char WHLocation::code = 'B';
const int WHLocation::capacity = WHLOC_CAPACITY;
int WHLocation::nextId = 0;

WHLocation::WHLocation():Location(code, ++nextId) { }
WHLocation::~WHLocation(){}

int WHLocation::getCapacity() const { return capacity; }

bool WHLocation::add(string name, int amount) {
    if (isAvailable() && amount <= capacity){
        product = name;
        quantity = amount;
        return true;
    }
    return false;
}

bool WHLocation::remove(int remove){
    if (remove <= quantity){
        quantity -= remove;
        if (quantity == 0) { product = NONE; }
        return true;
    }
    return false;
}

void WHLocation::print() const{
    cout<<endl;
    cout << "Location: "<< id << endl;
    cout << "Product: "<< product << endl;
    cout << "Quantity: "<< quantity << endl;
}