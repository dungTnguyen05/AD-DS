#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    this -> head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    this -> head = new Node(array[0]);
    Node* curr = this -> head;

    for (int i = 1; i < len; i++) {
        curr -> setLink(new Node(array[i]));
        curr = curr -> getLink();
    }
}

LinkedList::~LinkedList() {
    Node* curr = this -> head;

    while (curr != nullptr) {
        Node* next = curr -> getLink();
        delete curr;
        curr = next;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    Node * newNode = new Node(newNum);

    if (pos <= 1 || this -> head == nullptr) {
        newNode -> setLink(this -> head);
        this -> head = newNode;
        return;
    }

    Node* curr = this -> head;

    for (int i = 2; i < pos; i++) {
        if (curr -> getLink() == nullptr) {
            curr -> setLink(newNode);
            return;
        }

        else {
            curr = curr -> getLink();
        }
    }

    newNode -> setLink(curr -> getLink());
    curr -> setLink(newNode);
}

bool LinkedList::deletePosition(int pos) {
    if (pos < 1 || this -> head == nullptr) {
        return false;
    }

    Node* curr = this -> head;

    for (int i = 2; i < pos; i++) {
        if (curr -> getLink() == nullptr) {
            return false;
        }

        else {
            curr = curr -> getLink();
        }
    }

    if (curr -> getLink() == nullptr) {
        return false;
    }

    Node* temp = curr -> getLink();
    curr -> setLink(temp -> getLink());
    delete temp;

    return true;
}

int LinkedList::get(int pos) {
    if (pos < 1) {
        return std::numeric_limits<int>::max();
    }
    
    Node* curr = this -> head;

    for (int i = 2; i <= pos; i++) {
        if (curr -> getLink() == nullptr) {
            return std::numeric_limits<int>::max();
        }

        else {
            curr = curr -> getLink();
        }
    }

    return curr -> getData();
}

int LinkedList::search(int target) {
    Node* curr = this -> head;
    int pos = 1;

    while (curr != nullptr) {
        if (curr -> getData() == target) {
            return pos;
        }

        curr = curr -> getLink();
        pos++;
    }

    return -1;
}

void LinkedList::printList() {
    Node* curr = this -> head;
    std::cout << "["; 

    while (curr != nullptr) {
        std::cout << curr -> getData();
        curr = curr -> getLink();

        if (curr != nullptr) {
            std::cout << " ";
        }
    }

    std::cout << "]" << std::endl;
}