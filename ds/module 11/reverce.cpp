#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next = NULL;
    ListNode(int val)
    {
        this->val = val;
    }
};

void print_node(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

void insert_at_tail(ListNode *&head, ListNode *&tail, int val)
{
    ListNode *newNode = new ListNode(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void reverse(ListNode *&head, ListNode *tmp)
{

    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }

    reverse(head, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
}

int main()
{

    ListNode *newHead = NULL;
    ListNode *newTail = NULL;

    insert_at_tail(newHead, newTail, 5);
    insert_at_tail(newHead, newTail, 15);
    insert_at_tail(newHead, newTail, 25);
    insert_at_tail(newHead, newTail, 15);

    reverse(newHead, newHead);

    print_node(newHead);

    return 0;
}