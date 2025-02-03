#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next = NULL;
    Node *prev = NULL;
    Node(int val)
    {
        this->val = val;
    }
};

class myQueue
{
public:
    int sz = 0;
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = head;

        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
            return;
        }

        head->prev = NULL;
        delete deleteNode;
    }

    int size()
    {
        return sz;
    }

    int front()
    {
        return head->val;
    }

    int back()
    {
        return tail->val;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{

    int n;
    cin >> n;

    myQueue my;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        my.push(t);
    }

    cout << my.size() << endl;

    while (!my.empty())
    {
        cout << my.front() << endl;
        my.pop();
    }

    cout << my.empty() << endl;

    return 0;
}