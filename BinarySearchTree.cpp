#include "BinarySearchTree.h"
#include <iostream>

UTEC::BinarySearchTree::BinarySearchTree(){
    root = nullptr;
};

UTEC::BinarySearchTree::~BinarySearchTree(){
    clear(root);
}




void UTEC::BinarySearchTree::insert(Node* current, Location data) {
    if(!root){
        root = new Node(data);
    }

    else if (data.getID() > current->data.getID()) {
        if (!current->next_right) {
            current->next_right = new Node(data);
        } else {
            insert(current->next_right, data);
        }
    }

    else if (data.getID() < current->data.getID()) {
        if (!current->next_left) {
            current->next_left = new Node(data);
        } else {
            insert(current->next_left, data);
        }
    }
}


void UTEC::BinarySearchTree::clear(Node* _root) {

    if (_root) {
        clear(_root->next_left);
        clear(_root->next_right);

        delete _root;
    }
    root = nullptr;
}

bool UTEC::BinarySearchTree::is_empty(){
    return (!root);
}



UTEC::Node* UTEC::BinarySearchTree::get_root(){
    return root;
}

void UTEC::BinarySearchTree::print(int position_id){
    search(position_id)->data.print();
}

UTEC::Node* UTEC::BinarySearchTree::search(int position_id) {
    Node *current = root;

    while(current->data.getID() != position_id){
    if (position_id < current->data.getID()) {
        current = current->next_left;
    }

    else if (position_id > current->data.getID()) {
        current = current->next_right;
    }

}
    return current;
}
