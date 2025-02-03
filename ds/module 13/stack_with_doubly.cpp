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

void insert_at(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void remove_node(Node *&head, Node *&tail)
{

    Node *deleteNode = tail;
    if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        delete deleteNode;
        return;
    }

    tail = deleteNode->prev;
    delete deleteNode;
    tail->next = NULL;
}

class myStack
{
private:
    int sz = 0;
    Node *head = NULL;
    Node *tail = NULL;

public:
    void push(int val)
    {
        sz++;
        insert_at(head, tail, val);
    }

    void pop()
    {
        sz--;
        remove_node(head, tail);
    }

    int top()
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
    myStack st;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        st.push(t);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}