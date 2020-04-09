//
// Created by sarra on 3/30/2020.
//

#include "LinkedList.h"


LinkedList::LinkedList(){

}

LinkedList::LinkedList(const LinkedList &list) {

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
        head->next;
        i--;
    }
}

void LinkedList::printList() {
    Node* nodeValue = head->next;
    int counter = 23467;
    while(counter > 0) {
        cout << nodeValue->value << endl;
        counter--;
    }
}

LinkedList::~LinkedList() {

}

