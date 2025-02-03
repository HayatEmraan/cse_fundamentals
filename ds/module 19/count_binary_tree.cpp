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

Node *input_trees()
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

int count_trees(Node *root)
{
    if (root == NULL)
        return 0;

    if (!root->left && !root->right)
        return 0;

    int lf = count_trees(root->left);
    int rh = count_trees(root->right);

    return max(lf, rh) + 1;
}

int main()
{

    Node *root = input_trees();

    cout << count_trees(root);

    return 0;
}
