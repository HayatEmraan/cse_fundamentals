// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next = NULL;
//     Node(int val)
//     {
//         this->val = val;
//     }
// };

// void insert_at_tail(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }
//     Node *tmp = head;
//     while (tmp->next != NULL)
//     {
//         tmp = tmp->next;
//     }
//     tmp->next = newNode;
// }

// void insert_at_head(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }
//     newNode->next = head;
//     head = newNode;
// }

// void delete_at_head(Node *&list)
// {
//     if (list == NULL)
//     {
//         return;
//     }
//     Node *deleteNode = list;
//     list = list->next;
//     delete deleteNode;
// }

// void delete_at_any(Node *&head, int idx)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     if (idx == 0)
//     {
//         delete_at_head(head);
//         return;
//     }
//     Node *tmp = head;
//     for (int i = 0; i < idx - 1 && tmp->next != NULL; i++)
//     {
//         tmp = tmp->next;
//     }
//     if (tmp == NULL || tmp->next == NULL)
//     {
//         return;
//     }
//     Node *deletedNode = tmp->next;
//     tmp->next = deletedNode->next;
//     delete deletedNode;
// }

// void print_node(Node *list)
// {
//     if (list == NULL)
//     {
//         return;
//     }
//     while (list != NULL)
//     {
//         cout << list->val;
//         if (list->next != NULL)
//         {
//             cout << " ";
//         }
//         list = list->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     int q;
//     cin >> q;
//     Node *head = NULL;
//     for (int i = 0; i < q; i++)
//     {
//         int x, v;
//         cin >> x >> v;
//         if (x == 0)
//         {
//             insert_at_head(head, v);
//         }
//         else if (x == 1)
//         {
//             insert_at_tail(head, v);
//         }
//         else if (x == 2)
//         {
//             delete_at_any(head, v);
//         }
//         print_node(head);
//     }

//     return 0;
// }

