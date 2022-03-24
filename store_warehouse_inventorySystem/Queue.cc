
#include "Queue.h"

Queue::Queue(): head(NULL), tail(NULL), size(0) {}

Queue::~Queue() {
        Node* currNode = head;
    Node* nextNode = NULL;

    while(currNode!=NULL){
        nextNode = currNode->next;
        delete currNode;
        currNode = nextNode;
    }
}

bool Queue::isEmpty() const{
    return size == 0;
}

void Queue::peekFirst(WHLocation** wloc){
    if(!isEmpty()){
        *wloc = head->data;
    }else{
        *wloc = NULL;
    }
}

void Queue::popFirst(WHLocation** wloc){
    Node* curNode = head;
    //there is > 1 data in the queue
    if (size > 1){
        *wloc = head->data;
        head = head->next;
    }else if (size == 1) {
        //only 1 data in the queue
        *wloc = head->data;
        head = NULL;
        tail = NULL;
    } else {
        *wloc = NULL;
    }
    size--;
    delete curNode;
}

void Queue::addLast(WHLocation* wloc){
    Node* newNode = new Node();
    newNode->data = wloc;
    newNode->next = NULL;

    if (this->isEmpty()){
        head = newNode;
        tail = newNode;
        newNode->next = NULL;
    }else {
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}

void Queue::print() const{
    Node* curNode = head;
        cout<<"Print list..."<<endl;

    if (curNode == NULL){
        cout <<"List empty"<<endl;
    }

    while(curNode != NULL){
        curNode->data->print();
        curNode = curNode->next;
    }
}