// given a binary tree, find the node with the maximum value

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

// Method 1 to find sum
int sumOfTreeNode (node* root, int sum) {
    if (root == NULL) return 0;
    sum = sum + root->val + sumOfTreeNode(root->left, sum) + sumOfTreeNode(root->right, sum);

    return sum;
}

// Method 2 to find sum
int sum (node* root) {
    if (root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}

// finding size of the binary tree
int size(node* root) {
    if (root == NULL) return 0;
    if (root->left == NULL) return 1;
    if (root->right == NULL) return 1;

    return 1 + size(root->left) + size(root->right);
}

// finding maximum value
int maxVal (node* root) {
    if (root == NULL) return INT_MIN;

    int leftMax = maxVal(root->left);
    int rightMax = maxVal(root->right);
    return max (root->val, max(leftMax, rightMax));
}

// finding the minimum value
int minVal (node* root) {
    if (root == NULL) return INT_MAX;

    int leftMin = minVal(root->left);
    int rightMin = minVal(root->right);

    return min(root->val, min(leftMin, rightMin));
}

// finding node with maximum value
node* maxNode(node* root) {
    if (root == NULL) return NULL;

    node* leftMax = maxNode(root->left);
    node* rightMax = maxNode(root->right);

    node* maxi = root;
    if (leftMax && leftMax->val > maxi->val) maxi = leftMax;
    if (rightMax && rightMax->val > maxi->val) maxi = rightMax;
    /*
        leftMax && leftMax->val
        this ensures that leftmax and rightmax null na ho, agar null hua to leftmax->val segmentation fault de dega
        * segmentation fault genrally happen when we try to access a memory that is not accessible
    */

    return maxi;
}


int main() {
    node* a = new node(4);
    node* b = new node(9);
    node* c = new node(3);
    node* d = new node(7);
    node* e = new node(13);
    node* f = new node(6);
    node* g = new node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    // cout << sumOfTreeNode (a, 0);
    // cout << sum(a) << endl;
    // cout << size(a) << endl;

    cout << "max val is : "<< maxVal(a) << endl;
    cout << "min val is : "<< minVal(a) << endl;

    node* temp = maxNode(a);
    cout << temp->val << endl;
}