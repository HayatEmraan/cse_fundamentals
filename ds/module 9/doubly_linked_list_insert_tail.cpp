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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL && tail == NULL)
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
    Node *head = new Node(5);
    Node *middle = new Node(10);

    Node *tail = new Node(15);

    // forword connection
    head->next = middle;
    middle->next = tail;

    // backword connection
    middle->prev = head;
    tail->prev = middle;

    // insert at tail
    insert_at_tail(head, tail, 30);
    insert_at_tail(head, tail, 40);
    insert_at_tail(head, tail, 50);

    // print forword
    print_forword(head);

    return 0;
}