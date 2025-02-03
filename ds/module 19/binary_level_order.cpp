#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left = NULL;
    Node *right = NULL;
    Node(int val)
    {
        this->val = val;
    }
};

void level_order(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
}

int main()
{
    Node *root = new Node(5);
    Node *a = new Node(10);
    Node *b = new Node(15);
    Node *c = new Node(20);
    Node *d = new Node(25);
    Node *e = new Node(30);
    Node *f = new Node(35);
    Node *g = new Node(40);
    Node *h = new Node(45);

    root->left = a;
    root->right = b;

    a->left = c;
    a->right = e;

    b->right = f;

    e->left = g;
    e->right = h;

    level_order(root);

    return 0;
}