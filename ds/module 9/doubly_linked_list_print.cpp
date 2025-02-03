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

void print_backword(Node *tail)
{
    Node *tmp = tail;

    while (!!tmp)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}

int main()
{
    Node *head = new Node(5);
    Node *a = new Node(10);
    Node *b = new Node(15);

    head->next = a;
    a->next = b;

    a->prev = head;
    b->prev = a;

    print_forword(head);
    cout << endl;

    print_backword(b);
    return 0;
}