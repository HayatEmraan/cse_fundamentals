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

int total_trees(Node *root)
{
    if (root == NULL)
        return 0;

    int l = total_trees(root->left);
    int r = total_trees(root->right);

    return l + r + 1;
}

int max_height(Node *root)
{
    if (root == NULL)
        return 0;

    if (!root->left && !root->right)
        return 1;

    int lf = max_height(root->left);
    int rh = max_height(root->right);

    return max(lf, rh) + 1;
}

int main()
{
    Node *root = input_binary();

    int maxHeight = max_height(root);

    int totalTrees = total_trees(root);

    int cnt = (int)(pow(2, maxHeight) - 1);

    if (cnt == totalTrees)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}