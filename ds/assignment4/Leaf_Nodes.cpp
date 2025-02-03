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

vector<int> nd;

void print_binary(Node *root)
{
    if (!root)
        return;
    if (!root->left && !root->right)
        return nd.push_back(root->val);
    print_binary(root->left);
    print_binary(root->right);
}

int main()
{
    Node *root = input_binary();

    print_binary(root);

    sort(nd.begin(), nd.end(), greater<int>());

    for (auto i : nd)
    {
        cout << i << " ";
    }

    return 0;
}