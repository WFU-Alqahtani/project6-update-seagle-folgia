#ifndef NODE_H
#define NODE_H

class Node {
public:
    // Node constructor
    Node(YourClass v , Node* n = nullptr)
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

    YourClass value;
    Node* next;

};

#endif //NODE_H
