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

void postorder(Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

int main()
{

    Node *root = new Node(5);
    Node *a = new Node(10);
    Node *b = new Node(15);
    Node *c = new Node(20);
    Node *d = new Node(25);
    Node *e = new Node(30);

    root->left = a;
    root->right = b;

    a->left = c;

    b->left = d;
    b->right = e;

    postorder(root);

    return 0;
}