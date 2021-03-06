//
// Created by usuario on 25/5/20.
//

#ifndef LISTA_NODE_H
#define LISTA_NODE_H


class Node {
private:
    void* dirMemory ;
    int references;
    int ID;

public:
    static int generateID();

    Node *next;
    Node();
    Node(void *dirMemory);

    void *getDirMemory();
    void setDirMemory(void *dirMemory);

    int getID();
    int getReferences();

    void deleteReferences();
    void addReferences();

};


#endif //LISTA_NODE_H
