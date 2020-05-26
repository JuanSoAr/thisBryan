//
// Created by usuario on 22/5/20.
//

#ifndef VSCODEMEMORY_GARBAGECOLLECTOR_H
#define VSCODEMEMORY_GARBAGECOLLECTOR_H


#include "VSPtr.h"
#include <vector>
/*
 * Aqui arriba va la clase sujeto del GarbageCollector, pero me puse a programar esa lista de mierda.
 *
 */

using namespace std;
class GarbageCollector
{
private:
    GarbageCollector() = default;
    static GarbageCollector* instance;
public:
    static GarbageCollector* getInstance();
    //aqui va la lista cuando le de la gana de funcionar

    //aqui va la funcion hilo la cual va a estar esperando que se cree un nuevo VSPtr que va a ser notifacado por la
    //funcion update
};


#endif //VSCODEMEMORY_GARBAGECOLLECTOR_H
