#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    preOrder(root->left);  // left recursion
    preOrder(root->right); // right recursion
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left); // left recursion
    cout << root->val << " ";
    inOrder(root->right); // right recursion
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);  // left recursion
    postOrder(root->right); // right recursion
    cout << root->val << " ";
}

int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    preOrder(a);
    cout << endl;
    inOrder(a);
    cout << endl;
    postOrder(a);
}