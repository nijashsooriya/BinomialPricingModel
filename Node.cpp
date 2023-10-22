//
// Created by Nijash Sooriya on 2023-10-21.
//
#include <queue>
#include <iostream>
#include <vector>
#include "Node.h"


void Node::binaryConstruction(Node *root, int t){
    if(t > 0){
        root->left = new Node(root->val - 1);
        root->right = new Node(root->val + 1);
        Node::binaryConstruction(root->left, t - 1);
        Node::binaryConstruction(root->right,t - 1);

    }
}
void Node::printTree(Node* root) {
    std::vector<int> values;
    std::queue<Node *> q;
    q.push(root);
    while (q.size() > 0) {
        Node *n = q.front();
        values.push_back(n->val);
        q.pop();
        if (n->left != nullptr) {
            q.push(n->left);
        }
        if (n->right != nullptr) {
            q.push(n->right);
        }

    }
    int counter = 0;
    for(int i = 0; i < values.size(); i++){
        int range = pow(2,i);
        if(counter+range <= values.size()) {
            std::vector<int> replace = std::vector<int>(values.begin() + counter, values.begin() + counter + range);
            counter += range;
            std::cout << "|Month: " << i << "|";
            for (auto it: replace) {
                std::cout << " Price:" <<it << " ";
            }
            std::cout << '\n';
        }
    }
}
