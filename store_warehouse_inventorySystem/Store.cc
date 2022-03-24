
#include "Store.h"

Store::Store(const string& name): name(name){
    products = new List();
}

Store::~Store(){
    delete products;
}

void Store::receiveProduct(const string& pname, int quantity){
    Product* prod = NULL;
    cout<<"Receiving..."<<endl;
    products->findProduct(pname, &prod);
    if (prod==NULL){
        cout<<"Making new product"<<endl;
        StoreLocation* sloc;
        findAvailableSLoc(&sloc);
        prod = new Product(pname, sloc);
        products->add(prod);  
    }

    WHLocation* bloc;
    while(quantity > 0){
        findAvailableWHLoc(&bloc);
        if (quantity > bloc->getCapacity()){
            bloc->add(pname, bloc->getCapacity());
            prod->addWHLocation(bloc);
            quantity -= bloc->getCapacity();
        }else{
            bloc->add(pname, quantity);
            prod->addWHLocation(bloc);
            quantity = 0;
        }
    }

    cout<<"stocking store location..."<<endl;
    prod->stockStoreLocation();

}

void Store::fillOrder(const string& product, int& quantity){
    Product* prod;
    findProduct(product, &prod);
    if (prod == NULL){
        return;
    }
    prod->fillOrder(quantity);
}

void Store::print() const{
    cout<<"Store: "<<name<<endl;
}

void Store::findAvailableSLoc(StoreLocation** sloc){
    for(int i = 0; i < SLOCS; i++){
        if(storeLocations[i].isAvailable()){
            *sloc = &storeLocations[i];
            break;
        }
    }
}

void Store::findAvailableWHLoc(WHLocation** wloc){
    for(int i = 0; i < WHLOCS; i++){
        if(whLocations[i].isAvailable()){
            *wloc = &whLocations[i];
            break;
        }
    }
}

void Store::findProduct(const string& name, Product** prod){
    products->findProduct(name, prod);
}

void Store::printStoreStock() const{
    cout << endl;
    cout << "printing store stock..." << endl;
    for(int i = 0; i < SLOCS; i++){
        if(!storeLocations[i].isAvailable()){
            storeLocations[i].print();
        }
    }
}

void Store::printWareHouseStock() const{
    cout << endl;
    cout << "printing warehouse stock..." << endl;
    for(int i = 0; i < WHLOCS; i++){
        if(!whLocations[i].isAvailable()){
            whLocations[i].print();
        }
    }
}

void Store::printProducts() const{
    cout << endl;
    cout << "printing products from store..." << endl;
    products->print();
}
