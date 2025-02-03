#include <bits/stdc++.h>
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

Node *input_trees()
{
    int vl;
    cin >> vl;

    if (vl == -1)
        return NULL;
    queue<Node *> q;

    Node *root = new Node(vl);
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

void print_binary(Node *root)
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

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

bool search_binary(Node *root, int idx)
{
    if (root == NULL)
        return false;
    if (root->val == idx)
        return true;

    if (root->val > idx)
        return search_binary(root->left, idx);
    else
        return search_binary(root->right, idx);
}

int main()
{
    Node *root = input_trees();

    int iv;
    cin >> iv;

    if (search_binary(root, iv))
        cout << "YES / Found";
    else
        cout << "NO / Not Found";
    return 0;
}