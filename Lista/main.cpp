#include <iostream>

#include "List.h"
#include "List.cpp"

int main() {
    int *dir1;
    *dir1= 12;
    List prueba;
    prueba.addNode(dir1);
    prueba.printList();
    return 0;
}
