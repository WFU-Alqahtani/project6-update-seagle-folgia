//
// Created by sarra on 3/30/2020.
//

#include "LinkedList.h"


LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::LinkedList(const LinkedList &list) {
    if(list.head){
        if(list.head) {
            Node *curr;
            Node* listcurr;
            head = curr = new Node(list.head->value);
            listcurr = list.head->next;
            while (listcurr != nullptr) {
                curr = curr->next = new Node(listcurr->value);
                listcurr = listcurr->next;
            }
        } else {
            head = nullptr;
        }
    }



}

LinkedList& LinkedList::operator=(const LinkedList &rhs) {
    swap(*head, *rhs.head);
    return *this;
}

void LinkedList::append(CityData obj) {
    Node *newNode = nullptr;
    Node *tmp = new Node(obj.cityName, head);
    head = tmp;
    tmp = newNode;
}

void LinkedList::InsertionSort() {
    Node* temp;
    temp = head->next;
    int i = 30000;
    while(i > 0) {
        if (head->value > temp->value) {
            Node* newNode = temp;
            temp = head;
            head = newNode;
        }
        head = head->next;
        i--;
    }
}

void LinkedList::printList() {
    Node * cursor = head;
    if (! cursor )
        cout << " empty list "<<endl;
    else {
        while (cursor!= nullptr ){
            cout << cursor->value << endl;
            cursor = cursor->next ;
        }
    }
}

LinkedList::~LinkedList() {
    while(head != nullptr){

        Node* temp = head;
        head = head->next;
        delete temp;

    }
}

