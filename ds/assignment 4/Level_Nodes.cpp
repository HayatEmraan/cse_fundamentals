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

int max_height(Node *root)
{
    if (root == NULL)
        return 0;

    if (!root->left && !root->right)
        return 0;

    int lf = max_height(root->left);
    int rh = max_height(root->right);

    return max(lf, rh) + 1;
}

void print_binary(Node *root, int idx)
{

    if (idx == 0)
    {
        cout << root->val;
        return;
    }
    queue<pair<Node *, int>> q;

    q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> f = q.front();

        if (f.second == idx)
            break;

        q.pop();

        if (f.first->left)
            q.push({f.first->left, f.second + 1});
        if (f.first->right)
            q.push({f.first->right, f.second + 1});
    }

    while (!q.empty())
    {
        pair<Node *, int> f = q.front();
        cout << f.first->val << ' ';
        q.pop();
    }
}

int main()
{
    Node *root = input_binary();

    int maxHeight = max_height(root);

    int lv;
    cin >> lv;

    if (lv > maxHeight)
    {
        cout << "Invalid";
        return 0;
    }

    print_binary(root, lv);

    return 0;
}