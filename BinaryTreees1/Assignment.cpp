#include <iostream>
#include <climits>
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

int product(Node *root)
{
    if (root == NULL)
        return 1;
    return (root->val) * product(root->left) * product(root->right);
}

int minNode(Node *root)
{
    if (root == NULL)
        return INT_MAX;
    return min(root->val, min(minNode(root->left), minNode(root->right)));
}

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(4);
    Node *e = new Node(50);
    Node *f = new Node(6);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;

    cout << product(a) << endl;
    cout << minNode(a) << endl;
}