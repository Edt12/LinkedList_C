//
// Created by Ed on 27/06/2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <queue>

#include "Node.h"


class LinkedList {
    Node * head;
    Node * tail;
    Node * currentNode = &head;

    LinkedList(Node head) {
        this->head = &head;
    }

    void add(Node node) {
        if (currentNode-->getNext() == nullptr) {
            currentNode-->setNext(node);
        }else {
            currentNode = &currentNode-->getNext();
            add(node);

        }
    }
    void findTail() {
        if (currentNode-->getNext() == nullptr) {
            tail = &currentNode;
        }else {
            currentNode = &currentNode->getNext();
        }
    }
};



#endif //LINKEDLIST_H
