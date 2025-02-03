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

void delete_tail(Node *&head, Node *&tail)
{
    Node *tmp = tail;

    if (tail == NULL)
    {
        return;
    }

    if (tail->prev != NULL)
    {
        tail = tail->prev;
        tail->next = NULL;
        delete tmp;
    }
    else
    {
        delete tmp;
        head = NULL;
        tail = NULL;
    }
}

int main()
{

    Node *head = new Node(5);
    Node *middle = new Node(10);

    Node *tail = new Node(25);

    // forword connection
    head->next = middle;
    middle->next = tail;

    // backword connection
    middle->prev = head;
    tail->prev = middle;

    // delete head
    delete_tail(head, tail);
    delete_tail(head, tail);
    delete_tail(head, tail);

    // print forword
    print_forword(head);

    return 0;
}