#ifndef NODE_H
#define NODE_H

#include "CityData.h"
class Node {
public:
    // Node constructor
    Node(CityData v , Node* n = nullptr)
    {
        value = v;
        next = n;
    }

    //Destructor
    ~Node(){
        delete next;
    }
    friend class LinkedList;
private:
    CityData value;
    Node* next;

};

#endif //NODE_H
