//
// Created by usuario on 22/5/20.
//

#ifndef VSCODEMEMORY_GARBAGECOLLECTOR_H
#define VSCODEMEMORY_GARBAGECOLLECTOR_H


#include "VSPtr.h"
#include "List.h"
/*
 * Aqui arriba va la clase sujeto del GarbageCollector, pero me puse a programar esa lista de mierda.
 *
 */

using namespace std;



class GarbageCollector
{
private:
    GarbageCollector();
    static GarbageCollector *instance;
    List *listGarbageCollector = new List();
public:
    List * getList();
    static GarbageCollector* getInstance();

};


#endif //VSCODEMEMORY_GARBAGECOLLECTOR_H
