#include <iostream>
#include <queue>
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
        this->right = NULL;
        this->left = NULL;
    }
};

int levels(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

void NthLevel(Node *root, int curr, int level)
{
    if (root == NULL)
        return;
    if (curr == level)
    {
        cout << root->val << " ";
        return;
    }
    NthLevel(root->left, curr + 1, level);
    NthLevel(root->right, curr + 1, level);
}

//levelOrderTraversal Right to left
void NthLevelRev(Node *root, int curr, int level)
{
    if (root == NULL)
        return;
    if (curr == level)
    {
        cout << root->val << " ";
        return;
    }
    NthLevelRev(root->right, curr + 1, level);
    NthLevelRev(root->left, curr + 1, level);
}

void levelOrder(Node *root)
{
    int n = levels(root);
    for (int i = 0; i < n; i++)
    {
        NthLevelRev(root, 0, i);
        cout << endl;
    }
}

void levelOrderQueue(Node *root)  //BFS
{
    queue<Node *> q;
    q.push(root);
    while (q.size() > 0)
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
    cout << endl;
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

    // NthLevel(a, 0, 2);//root is at 0th level
    // levelOrder(a);
    levelOrderQueue(a);
}
