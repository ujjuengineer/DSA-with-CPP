// trees and graphs are non-linear data structure
#include<iostream>
using namespace std;

class node {
public:
    int val;
    node* left;
    node* right;

    node(int val) {
        this->val = val;
        left = right = NULL;
    }
};

int levels (node* root) {
    if (root == NULL) return 0;

    int leftLevel = levels(root->left);
    int rightLevel = levels(root->right);

    return max(leftLevel, rightLevel) + 1;
    // height of the binary tree = level - 1
}

int main() {
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);

    a->left = b;
    a->right = c;
    // b->left = d;
    // b->right = e;
    // c->left = f;
    // c->right = g;
   
    cout << levels(a) << endl;
}