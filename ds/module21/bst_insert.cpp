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

void print_trees(Node *root)
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

void bst_insert(Node *&root, int idx)
{
    if (idx == -1)
        return;

    Node *bstNode = new Node(idx);
    if (root == NULL)
        root = bstNode;

    if (idx > root->val)
    {
        if (root->right == NULL)
            root->right = bstNode;
        else
            bst_insert(root->right, idx);
    }
    else
    {
        if (root->left == NULL)
            root->left = bstNode;
        else
            bst_insert(root->left, idx);
    }
}

int main()
{

    Node *root = input_trees();

    print_trees(root);

    int lv;
    cin >> lv;

    bst_insert(root, lv);

    cout << endl;

    print_trees(root);
    return 0;
}