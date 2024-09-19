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

int numberOfNodes(Node *root, int low, int high)
{
    if (root == NULL)
        return 0;

    int count = 0;
    if (root->val >= low && root->val <= high)
        count = 1;

    if (root->val > low)
        count += numberOfNodes(root->left, low, high);
    if (root->val < high)
        count += numberOfNodes(root->right, low, high);

    return count;
}

int levels(Node *root, Node *node)
{
    if (root == NULL)
        return -1;
    if (root->val == node->val)
        return 0;
    int left_level = levels(root->left, node);
    int right_level = levels(root->right, node);
    if (left_level == -1 && right_level == -1)
        return -1;
    return 1 + max(left_level, right_level);
}

Node *LCA(Node *root, Node *n1, Node *n2)
{
    if (root == NULL)
        return NULL;
    if (root->val > n1->val && root->val > n2->val)
        return LCA(root->left, n1, n2);
    else if (root->val < n1->val && root->val < n2->val)
        return LCA(root->right, n1, n2);
    return root;
}

int distanceBetweenNodes(Node *root, Node *p, Node *q)
{
    Node *lca = LCA(root, p, q);
    int d1 = levels(lca, p);
    int d2 = levels(lca, q);
    return d1 + d2;
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
    cout << numberOfNodes(a, 3, 8) << endl;
    cout << distanceBetweenNodes(a, e, g);
}
