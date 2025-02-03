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
        tail = newNode;
    }

    void pop()
    {
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete deleteNode;
    }

    int front()
    {
        return head->val;
    }

    int back()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
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