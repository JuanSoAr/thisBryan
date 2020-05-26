//
// Created by usuario on 25/5/20.
//

#ifndef LISTA_LIST_H
#define LISTA_LIST_H

#include "Node.h"
#include "Node.cpp"
class List {
    Node *first;
public:
    Node *getFirst();
    void addNode(void *dirMemory);
    void deleteNode(int ID);

    Node getNode(int ID);

    void deleteReferences();
    void addReferences();

    void updateValue(void* newValue);
    void printList();


};


#endif //LISTA_LIST_H
