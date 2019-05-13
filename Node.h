//
// Created by alejandro on 4/3/19.
//

#ifndef NODESTRUCT_NODE_H
#define NODESTRUCT_NODE_H

#include "Location.h"

namespace UTEC {

    struct Node {
        //int value;
        Location data;
        Node *next;
        Node *next_right;
        Node *next_left;

        //explicit Node(int _value);
        explicit Node(Location _value);
    };
}

#endif //NODESTRUCT_NODE_H
