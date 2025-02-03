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

int main()
{
    Node *head = new Node(5);
    Node *middle = new Node(10);

    Node *tail = new Node(15);

    // forword connection
    head->next = middle;
    middle->next = tail;

    // backword connection
    middle->prev = head;
    tail->prev = middle;

    return 0;
}