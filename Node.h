//
// Created by alejandro on 4/3/19.
//

#ifndef NODESTRUCT_NODE_H
#define NODESTRUCT_NODE_H

namespace UTEC {
    template <typename T>
    struct Node {
        //int value;
        T data;
        Node *next;
        Node *next_right;
        Node *next_left;

        //explicit Node(int _value);
        explicit Node(T _value);
    };
}

#endif //NODESTRUCT_NODE_H
