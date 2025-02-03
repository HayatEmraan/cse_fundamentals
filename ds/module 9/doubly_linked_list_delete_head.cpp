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

void delete_tail(Node *&head)
{
    Node *tmp = head;

    if (head == NULL)
    {
        return;
    }

    if (head->next != NULL)
    {
        Node *tmpNode = head->next;
        tmpNode->prev = NULL;
        head = tmpNode;
        delete tmp;
    }
    else
    {
        delete head;
        head = NULL;
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
    delete_tail(head);
    delete_tail(head);

    // print forword
    print_forword(head);

    return 0;
}