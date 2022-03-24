#include "Location.h"

const string Location::NONE = "Empty";

Location::Location(char c, int i) {
    id = c+ to_string(i);
    product = NONE;
    quantity = 0;
}
Location::~Location(){}

/* getters */
string Location::getId() const { return this->id; }
string Location::getProduct() const { return this->product; }
int Location::getQuantity() const { return this->quantity; }

/* member functions */
bool Location::isEmpty() const { return this->quantity == 0; }
bool Location::isAvailable() const { return this->product.compare(NONE) == 0; }
void Location::print() const {
    cout << endl;
    cout << "Printing Location: " << endl;
    cout << "Id: "<< getId() << " || Product:" << getProduct() << " || Quantity:" << getQuantity() << endl;
}
