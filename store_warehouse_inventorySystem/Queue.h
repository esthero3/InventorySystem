#ifndef QUEUE_H
#define QUEUE_H

#include "WHLocation.h"

class Queue{
    class Node {
        public:
            WHLocation* data;
            Node* next;
    };

    public:
        Queue();
        ~Queue();
        bool isEmpty() const;
        void peekFirst(WHLocation** wloc); //points wloc to the first warehouse location in the queue
        void popFirst(WHLocation** wloc); //remove the first warehouse location in the queue and point wloc to it
        void addLast(WHLocation* wloc); //add a new warehouse location to the end of the queue
        void print() const;
        
    private:
        Node* head;
        Node* tail;
        int size; //keeps track of how many nodes with data exist
};

#endif