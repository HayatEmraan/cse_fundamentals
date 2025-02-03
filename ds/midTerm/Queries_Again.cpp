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

void print_left(Node *head)
{
    Node *tmp = head;

    if (head)
    {
        cout << "L ->" << " ";
    }

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    if (head)
    {
        cout << endl;
    }
}

void print_right(Node *tail)
{

    Node *tmp = tail;

    if (tail)
    {
        cout << "R ->" << " ";
    }

    while (tmp != NULL)
    {
        cout << tmp->val << ' ';
        tmp = tmp->prev;
    }

    if (tail)
    {
        cout << endl;
    }
}

int list_size(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }

    return cnt;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&tail, int val)
{

    Node *newNode = new Node(val);

    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void insert_at_any(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);

    Node *tmp = head;

    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }

    newNode->prev = tmp;
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
}

int main()
{
    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;

        int sz = list_size(head);

        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (sz == x)
        {
            insert_at_tail(tail, v);
        }
        else if (sz > 0 && x < sz)
        {
            insert_at_any(head, x, v);
        }
        else
        {
            cout << "Invalid" << endl;
            continue;
        }

        print_left(head);
        print_right(tail);
    }

    return 0;
}