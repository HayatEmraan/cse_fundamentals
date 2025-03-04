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

Node *input_binary()
{

    int val;
    cin >> val;
    queue<Node *> q;
    Node *root = new Node(val);

    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    return root;
}

void print_left(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
        print_left(root->left);
    else
        print_left(root->right);

    cout << root->val << " ";
}

void print_right(Node *root)
{
    if (root == NULL)
        return;

    cout << root->val << " ";
    if (root->right)
        print_right(root->right);
    else
        print_right(root->left);
}

int main()
{
    Node *root = input_binary();

    if (root->left)
    {
        print_left(root);
        print_right(root->right);
    }
    else
        print_right(root);
    return 0;
}