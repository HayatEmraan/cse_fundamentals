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

void insert_at_any(Node *&node, int pos, int val)
{
    Node *any = new Node(val);
    Node *tmp = node;

    if (tmp->next == NULL)
    {
        tmp->next = any;
        return;
    }

    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }

    any->next = tmp->next;

    tmp->next = any;
}

void print_node(Node *node)
{
    while (node != NULL)
    {
        cout << node->val << endl;
        node = node->next;
    }
}

int main()
{

    Node *head = new Node(5);
    Node *a = new Node(10);
    Node *b = new Node(15);

    head->next = a;
    a->next = b;

    insert_at_any(head, 1, 20);

    insert_at_any(head, 2, 25);

    insert_at_any(head, 5, 30);

    print_node(head);

    return 0;
}