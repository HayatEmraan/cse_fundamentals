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

void print_forword(Node *head)
{
    Node *tmp = head;
    while (!!tmp)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void insert_at_any(Node *&head, Node *&tail, int val, int idx)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    for (int i = 1; i < idx; i++)
    {
        if (tmp == NULL)
        {
            return;
        }
        tmp = tmp->next;
    }

    Node *tmpPtr = tmp->next;

    if (tmp != NULL)
    {
        tmpPtr->prev = newNode;
        newNode->next = tmpPtr;
        tmp->next = newNode;
        return;
    }

    tmp->next = newNode;
    newNode->prev = tmp;
    tail = newNode;
}

int main()
{
    Node *head = new Node(5);
    Node *middle = new Node(10);

    Node *tail = new Node(15);

    // forword connection
    head->next = middle;
    middle->next = tail;

    // backword connection
    middle->prev = head;
    tail->prev = middle;

    // insert at any
    insert_at_any(head, tail, 20, 2);
    insert_at_any(head, tail, 23, 4);

    // print forword
    print_forword(head);

    return 0;
}