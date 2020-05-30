//
// Created by usuario on 22/5/20.
//

#include "GarbageCollector.h"

GarbageCollector* GarbageCollector::instance = 0;

GarbageCollector::GarbageCollector(){};



GarbageCollector* GarbageCollector::getInstance()
{
    if (instance == 0)
    {
        instance = new GarbageCollector();
    }
    return instance;
}

List * GarbageCollector::getList() {
    return this->listGarbageCollector;
}

