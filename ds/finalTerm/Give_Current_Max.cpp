#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int marks;
    int roll;

    Student(string name, int marks, int roll)
    {
        this->name = name;
        this->marks = marks;
        this->roll = roll;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.marks > r.marks)
            return false;
        else if (l.marks < r.marks)
            return true;
        else
            return l.roll > r.roll;
    }
};

void insert_queue(priority_queue<Student, vector<Student>, cmp> &pq)
{
    string name;
    int roll, marks;
    cin >> name >> roll >> marks;

    Student std(name, marks, roll);
    pq.push(std);
}

void print_queue(const priority_queue<Student, vector<Student>, cmp> &pq)
{
    if (pq.empty())
        cout << "Empty";
    else
    {
        const Student &top_student = pq.top();
        cout << top_student.name << " " << top_student.roll << " " << top_student.marks;
    }
    cout << endl;
}

int main()
{

    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; i++)
    {
        insert_queue(pq);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int ix;
        cin >> ix;

        if (ix == 0)
        {
            insert_queue(pq);
            print_queue(pq);
        }
        else if (ix == 1)
        {
            print_queue(pq);
        }
        else
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                print_queue(pq);
            }
        }
    }

    return 0;
}