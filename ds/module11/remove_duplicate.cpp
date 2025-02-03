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

Node *remove_duplicate(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        Node *tmpNxt = tmp->next;
        Node *prev = tmp;

        while (tmpNxt != NULL)
        {
            if (tmpNxt->val == tmp->val)
            {
                prev->next = tmpNxt->next;
                delete tmpNxt;
                tmpNxt = prev->next;
            }
            else
            {
                prev = tmpNxt;
                tmpNxt = tmpNxt->next;
            }
        }

        tmp = tmp->next;
    }

    return head;
}

void print_node(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = new Node(5);
    Node *a = new Node(10);
    Node *b = new Node(15);
    Node *dup = new Node(15);
    Node *tail = new Node(10);

    head->next = a;
    a->next = b;
    b->next = dup;
    dup->next = tail;

    Node *nodeList = remove_duplicate(head);

    print_node(nodeList);

    return 0;
}