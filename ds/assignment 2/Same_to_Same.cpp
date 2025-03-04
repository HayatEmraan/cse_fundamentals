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

void checking_same(Node *list1, Node *list2)
{
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val != list2->val)
        {
            cout << "NO";
            return;
        }

        list1 = list1->next;
        list2 = list2->next;
    }

    if ((list1 == NULL && list2 != NULL) || (list1 != NULL && list2 == NULL))
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}

int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (true)
    {
        int iv;
        cin >> iv;

        if (iv == -1)
            break;

        insert_at(head1, tail1, iv);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int iv;
        cin >> iv;

        if (iv == -1)
            break;

        insert_at(head2, tail2, iv);
    }

    checking_same(head1, head2);

    return 0;
}