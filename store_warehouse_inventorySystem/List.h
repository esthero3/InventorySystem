#ifndef LIST_H
#define LIST_H

#include "Product.h"

class List{

    //private by default
    class Node {
        public:
            Product* data;
            Node*    next;
    };

    public:
        List();
        ~List(); // Any data left in the List gets destroyed
        void add(Product*);//we have unlimited size, so add always succeeds
        void get(const string& name, Product**);//return false if name not found
        void remove(const string& name, Product**);//double pointer for a return parameter of a pointer
        void removeUpTo(const string& name);
        void print() const;  //not modify this List object
        bool isEmpty() const; //return true if the list is empty, false otherwise
        void findProduct(const string& name, Product** prod); //point the product with the given parameter name to output parameter prod. Prod will be NULL when not found.

    private:
        Node* head;
};


#endif

