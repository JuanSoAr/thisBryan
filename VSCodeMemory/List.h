//
// Created by usuario on 25/5/20.
//

#ifndef VSCODEMEMORY_LIST_H
#define VSCODEMEMORY_LIST_H

#include "Node.h"
#include "Node.cpp"


class List {
    Node *first;
public:
    Node *getFirst();
    List();
    void addNode(void *dirMemory);
    void setMemory(void *dirMemory, int ID);
    void deleteNode(int ID);
    Node getNode(int ID);

    void deleteReferences(int ID);
    void addReferences(int ID);

    void updateValue(void* newValue);
    void printList();

};


#endif //VSCODEMEMORY_LIST_H
