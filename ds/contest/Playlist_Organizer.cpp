#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&root, string song)
{
    Node *newnode = new Node(song);
    newnode->next = root; 
    root = newnode; 
}

void insert_at_any(Node *&root, string song, int idx)
{
    if (idx < 0)
    {
        cout << "Invalid" << endl;
        return;
    }

    if (idx == 0)
    {
        insert_at_head(root, song);
        return;
    }

    Node *newnode = new Node(song);
    Node *tmp = root;

    for (int i = 0; i < idx - 1; i++)
    {
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    newnode->next = tmp->next;
    tmp->next = newnode;
}

void delete_at_any(Node *&root, int idx)
{
    if (root == NULL || idx < 0)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *tmp = root;

    if (idx == 0)
    {
        root = root->next;
        delete tmp;
        return;
    }

    for (int i = 0; i < idx - 1; i++)
    {
        if (tmp == NULL || tmp->next == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next;
    if (deleteNode == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    tmp->next = deleteNode->next;
    delete deleteNode;
}

void print_node(Node *root)
{
    if (root == NULL)
    {
        cout << "EMPTY" << endl;
        return;
    }

    while (root != NULL)
    {
        cout << root->val << endl;
        root = root->next;
    }
}

int main()
{
    int n;
    cin >> n;

    Node *root = NULL;

    for (int i = 0; i < n; i++)
    {
        string q;
        cin >> q;

        if (q == "ADD")
        {
            int idx;
            string nm;
            cin >> idx >> nm;

            if (idx < 0)
                cout << "Invalid" << endl;
            else
                insert_at_any(root, nm, idx);
        }
        else if (q == "DELETE")
        {
            int idx;
            cin >> idx;

            if (idx < 0)
                cout << "Invalid" << endl;
            else
                delete_at_any(root, idx);
        }
        else if (q == "PRINT")
        {
            print_node(root);
        }
    }

    return 0;
}
