#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&list, int val)
{
    Node *tmp = list;
    Node *tail = new Node(val);

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = tail;
}

void print_node(Node *list)
{

    while (list != NULL)
    {
        cout << list->val << endl;
        list = list->next;
    }
}

int main()
{

    Node *head = new Node(20);

    insert_at_tail(head, 30);
    insert_at_tail(head, 40);

    print_node(head);
    return 0;
}