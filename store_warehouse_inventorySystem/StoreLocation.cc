#include "StoreLocation.h"

const char StoreLocation::code = 'A';
const int StoreLocation::capacity = SLOC_CAPACITY;
int StoreLocation::nextId = 0;

StoreLocation::StoreLocation():Location(code, ++nextId) { }
StoreLocation::~StoreLocation(){}

void StoreLocation::setProduct(string p) {
    this->product = p;
}
int StoreLocation::getFreeSpace() const {
    return capacity - quantity;
}

int StoreLocation::getCapacity() const { return capacity; }
bool StoreLocation::add(string name, int amount) {
    //if there is no product in the store
    if (isAvailable()){
        if (getFreeSpace() >= amount){ //enough space for new product quantity
            product = name;
            quantity = amount;
            return true;
        }
    }else{
        //there is already a product, check if they match.
            //check if there is space
        if (product.compare(name) == 0 && getFreeSpace() >= amount){
            quantity += amount;
            return true;
        }
    }
    return false;
}

bool StoreLocation::remove(int remove){
    if (remove <= quantity){
        quantity -= remove;
        return true;
    }
    return false;
}

void StoreLocation::print() const{
    cout<<endl;
    cout << "Location: "<< id << endl;
    cout << "Product: "<< product << endl;
    cout << "Quantity: "<< quantity << endl;
}