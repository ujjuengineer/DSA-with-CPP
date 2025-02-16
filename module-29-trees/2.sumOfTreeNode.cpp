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

void displayTree(node* root) {
    if (root == NULL) return ;
    cout << root->val << " ";

    displayTree(root->left);
    displayTree(root->right);
}

// Method 1
int sumOfTreeNode (node* root, int sum) {
    if (root == NULL) return 0;
    sum = sum + root->val + sumOfTreeNode(root->left, sum) + sumOfTreeNode(root->right, sum);

    return sum;
}

// Method 2
int sum (node* root) {
    if (root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
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
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    // cout << sumOfTreeNode (a, 0);
    cout << sum(a) << endl;
}