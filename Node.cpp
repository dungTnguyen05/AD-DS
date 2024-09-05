#include "Node.h"

Node::Node() {
    this -> data = 0;
    this -> link = nullptr;
}

Node::Node(int data) {
    this -> data = data;
    this -> link = nullptr;
}

int Node::getData() {
    return data;
}

void Node::setData(int data) {
    this -> data = data;
}

Node* Node::getLink() {
    return link;
}

void Node::setLink(Node* next) {
    this -> link = next;
}