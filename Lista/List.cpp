//
// Created by usuario on 25/5/20.
//

#include "List.h"
#include "iostream"

using namespace std;
Node *List::getFirst()  {
    return first;
}

void List::addNode(void *dirMemory) {
    if(this->first == nullptr){
        this->first = new Node(dirMemory);
    }
    else{
        Node *present = this->first;
        while(present->next != nullptr){
            present = present->next;
        }
        present->next = new Node(dirMemory);
    }
}

void List::printList() {
    Node *present = this->first;
    cout<<"{";
    while (present != nullptr) {
        cout<<present->getDirMemory();
        cout<<"->";
        cout<<present->getReferences();
        cout<<"->";
        cout<<present->getID();
        cout<<"/";
        present = present->next;
    }
    cout<<"}";
}
