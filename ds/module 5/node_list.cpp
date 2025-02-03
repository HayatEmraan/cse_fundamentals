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

void print_node_list(Node *ls)
{
    while (ls != NULL)
    {
        cout << ls->val << endl;
        ls = ls->next;
    }
}

int main()
{
    Node *head = new Node(20);
    Node *a = new Node(30);
    Node *b = new Node(40);

    head->next = a;
    a->next = b;
    print_node_list(head);
    return 0;
}