//
// Created by usuario on 22/5/20.
//

#include "VSPtr.h"

template<class T>
VSPtr<T> VSPtr<T>::New()
{
    VSPtr<T> newVSPtr;
    newVSPtr.ptr = nullptr;
    newVSPtr.references = 1;
    newVSPtr.ID = genID();

    return newVSPtr;
}

template<class T>
int VSPtr<T>::genID()
{
    static int i;
    return  ++i;
}

template<class T>
VSPtr<T>::VSPtr()
{
}

template<class T>
T *VSPtr<T>::getPtr()
{
    return ptr;
}

template<class T>
void VSPtr<T>::setPtr(T newPtr)
{
    ptr = new T(newPtr);
}

template<class T>
int VSPtr<T>::getID()
{
    return this->ID;
}

template<class T>
void VSPtr<T>::setID(int newID)
{
    this->ID = newID;
}

template <class T>
int VSPtr<T>::getReferences()
{
    return this->references;
}

template<class T>
void VSPtr<T>::deleteReferences()
{
    this->references = references - 1;
}

template<class T>
void VSPtr<T>::addReferences()
{
    this->references = references +1;
}


template<class T>
T &VSPtr<T>::operator*() {
    return *ptr;
}

template<class T>
T *VSPtr<T>::operator->() {
    return ptr;
}

template<class T>
T VSPtr<T>::operator&() {
    return *ptr;
}

template<class T>
void VSPtr<T>::operator=(T newValue) {
    ptr = new T(newValue);
}

template<class T>
void VSPtr<T>::operator=(VSPtr vsptr) {
    deleteReferences();
    vsptr.addReferences();
    ptr = vsptr.ptr;
    ID = vsptr.ID;
}

