#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *prev = NULL;
    Node *next = NULL;
    Node(string val) { this->val = val; }
};

void insert_at(Node *&head, Node *&tail, string val)
{
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

void handle_next(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        head = head->next;
        cout << head->val << endl;
    }
}

void handle_prev(Node *&head)
{
    if (head == NULL || head->prev == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        head = head->prev;
        cout << head->val << endl;
    }
}

void handle_visit(Node *head, Node *&tmpNode, string val)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == val)
        {
            cout << tmp->val << endl;
            tmpNode = tmp;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        string tmp;
        cin >> tmp;
        if (tmp == "end")
            break;
        insert_at(head, tail, tmp);
    }

    int q;
    cin >> q;

    Node *tmp = head;

    for (int i = 0; i < q; i++)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "next")
        {
            handle_next(tmp);
        }
        else if (cmd == "prev")
        {
            handle_prev(tmp);
        }
        else if (cmd == "visit")
        {
            string word;
            cin >> word;

            handle_visit(head, tmp, word);
        }
    }

    return 0;
}
