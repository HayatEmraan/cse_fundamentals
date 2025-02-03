#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int tmp;
        cin >> tmp;

        if (tmp == -1)
        {
            break;
        }

        insert_at(head, tail, tmp);
    }

    for (Node *t = head, *j = tail; t != NULL && j != NULL; t = t->next, j = j->prev)
    {
        if (t->val != j->val)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}