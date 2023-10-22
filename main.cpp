#include <iostream>
#include "Node.h"
int main() {
//This constructs the binomial stock model with increments/decrements of $1
Node* root = new Node(20);
Node::binaryConstruction(root, 2);
Node::printTree(root);
}

