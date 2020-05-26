//
// Created by usuario on 22/5/20.
//

#ifndef VSCODEMEMORY_VSPTR_H
#define VSCODEMEMORY_VSPTR_H

class ObserverVSPtr{
    int references;
    int ID;
};


template <class T>
class VSPtr:ObserverVSPtr
{
private:
    T *ptr;
    int references;
    int ID;
public:
    //Y new
    static VSPtr<T> New();
    static int genID();
    VSPtr();
    T* getPtr();
    void setPtr(T newPtr);

    int getID();
    void setID(int newID);

    int getReferences();
    void deleteReferences();
    void addReferences();

    ~VSPtr();

    //Estar
    T &operator * ();
    T *operator -> ();
    T operator &();
    void operator =(T newValue);
    void operator =(VSPtr vsptr);

    //Esta funacion upadate va a ssr notificada por las funaciones anteriores y segun el tipo de modificacion
    //tendrea difeentes funcione para atualizar la lista que va a ser notifiado en el subjetctGarbageCollector
    void updateList();


};


#endif //VSCODEMEMORY_VSPTR_H
