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

void display(Node *root)
{
    if (root == NULL)
        return;
    display(root->left);
    cout << root->val << " ";
    display(root->right);
}

int maxi(Node *root)
{
    int maxNode = INT_MIN;
    if (root == NULL)
        return maxNode;
    if (root->val > maxNode)
    {
        maxNode = root->val;
    }
    return max(maxNode, max(maxi(root->left), maxi(root->right)));
}

int mini(Node *root)
{
    int minNode = INT_MAX;
    if (root == NULL)
        return minNode;
    if (root->val < minNode)
    {
        minNode = root->val;
    }
    return min(minNode, min(mini(root->left), mini(root->right)));
}

int main()
{
    Node *a = new Node(5);
    Node *b = new Node(3);
    Node *c = new Node(8);
    Node *d = new Node(4);
    Node *e = new Node(2);
    Node *f = new Node(7);
    Node *g = new Node(9);

    a->left = b;
    a->right = c;
    b->left = e;
    b->right = d;
    c->left = f;
    c->right = g;

    display(a);
    cout << endl;
    cout << maxi(a) << endl;
    cout << mini(a);
}
