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

void find_diff(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    int min_val = head->val;
    int max_val = head->val;

    while (head != NULL)
    {
        if (head->val < min_val)
        {
            min_val = head->val;
        }
        if (head->val > max_val)
        {
            max_val = head->val;
        }
        head = head->next;
    }

    cout << max_val - min_val << endl;
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

    find_diff(head);

    return 0;
}