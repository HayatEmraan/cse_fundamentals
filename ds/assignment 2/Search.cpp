#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int val;
    Node *next = NULL;
    Node(int val)
    {
        this->val = val;
    }
};

void insert_at(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void search_at(Node *list, int x)
{
    int idx = 0;
    while (list != NULL)
    {
        if (list->val == x)
        {
            cout << idx << endl;
            return;
        }
        idx++;
        list = list->next;
    }

    cout << -1 << endl;
}

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        Node *head = NULL;
        Node *tail = NULL;

        while (true)
        {
            int iv;
            cin >> iv;

            if (iv == -1)
                break;

            insert_at(head, tail, iv);
        }

        int x;
        cin >> x;

        search_at(head, x);
    }

    return 0;
}