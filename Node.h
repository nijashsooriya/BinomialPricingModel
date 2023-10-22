//
// Created by Nijash Sooriya on 2023-10-21.
//

#ifndef BINOMIALMODELPRICING_NODE_H
#define BINOMIALMODELPRICING_NODE_H

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int data){
        val = data;
        left = nullptr;
        right = nullptr;
    }
    static void binaryConstruction(Node *root, int t);

    static void printTree(Node* root);
};

#endif //BINOMIALMODELPRICING_NODE_H
