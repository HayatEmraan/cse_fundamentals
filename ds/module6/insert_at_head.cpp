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

void insert_at_head(Node *&node, int val)
{
    Node *tmp = new Node(val);

    if (node == NULL)
    {
        node = tmp;
        return;
    }

    tmp->next = node;
    node = tmp;
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
    Node *head = NULL;
    // Node *a = new Node(20);
    // Node *b = new Node(30);

    // head->next = a;
    // a->next = b;

    insert_at_head(head, 5);
    insert_at_head(head, 8);
    insert_at_head(head, 9);

    print_node(head);

    return 0;
}