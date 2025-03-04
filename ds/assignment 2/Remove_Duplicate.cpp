#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next = NULL;
    Node(int val)
    {
        this->val = val;
    }
};

void insert_at(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void remove_duplicate(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        Node *prev = tmp;
        Node *tmpPtr = tmp->next;
        while (tmpPtr != NULL)
        {
            if (tmpPtr->val == tmp->val)
            {
                prev->next = tmpPtr->next;
                delete tmpPtr;
                tmpPtr = prev->next;
            }
            else
            {
                prev = tmpPtr;
                tmpPtr = tmpPtr->next;
            }
        }
        tmp = tmp->next;
    }
}

void print_node(Node *list)
{
    Node *tmp = list;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int iv;
        cin >> iv;

        if (iv == -1)
            break;

        insert_at(head, tail, iv);
    }

    remove_duplicate(head);

    print_node(head);

    return 0;
}
