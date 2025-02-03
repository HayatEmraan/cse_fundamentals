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

void insert_at_head(Node *&head, int val)
{
    // creating new node
    Node *newNode = new Node(val);

    // checking - if head is null
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // manipulate head & assign new node as head node
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void print_forword(Node *head)
{
    Node *tmp = head;
    while (!!tmp)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
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

    // insert at head
    insert_at_head(head, 20);
    insert_at_head(head, 25);
    insert_at_head(head, 30);

    // print forword
    print_forword(head);

    return 0;
}