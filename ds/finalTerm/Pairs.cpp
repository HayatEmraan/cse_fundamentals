#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int id;
    Person(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
};

class cmp
{
public:
    bool operator()(const Person &l, const Person &r)
    {
        if (l.name != r.name)
        {
            return l.name > r.name;
        }
        else
        {
            return l.id < r.id;
        }
    }
};

int main()
{

    int n;
    cin >> n;
    priority_queue<Person, vector<Person>, cmp> qp;

    for (int i = 0; i < n; i++)
    {
        string name;
        int id;

        cin >> name >> id;

        Person ptr(name, id);

        qp.push(ptr);
    }

    while (!qp.empty())
    {
        cout << qp.top().name << " " << qp.top().id << endl;
        qp.pop();
    }

    return 0;
}