//
// Created by Ed on 27/06/2024.
//
//* = pointer
#ifndef NODE_H
#define NODE_H
class Node{
    int data;
    Node *next;
    Node(int data,Node next) {
        this->data = data;
        this->next = next;
    }
    public:
        //Getters and setters
        void setData(int data) {
            this->data = data;
        }
        int getData() {
            return data;
        }
        void setNext(Node nextNode) {
            this->next = &nextNode;

        }
        Node getNext() {
            return *next;
        }


};

#endif //NODE_H
