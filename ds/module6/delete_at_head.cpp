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

void delete_at_head(Node *&list)
{
    Node *deleteNode = list;
    list = list->next;

    delete deleteNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (!head)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_node(Node *list)
{
    if (list == NULL)
        return;

    print_node(list->next);
    cout << list->val << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int tmp;
        cin >> tmp;
        if (tmp == -1)
        {
            break;
        }

        insert_at_tail(head, tail, tmp);
    }

    print_node(head);

    return 0;
}