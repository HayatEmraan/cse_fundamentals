#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int total_marks;
    Student(int i, string nm, char s, int t)
    {
        id = i;
        name = nm;
        section = s;
        total_marks = t;
    }
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int id, marks;
        string name;
        char section;

        cin >> id >> name >> section >> marks;

        Student stu1 = Student(id, name, section, marks);

        cin >> id >> name >> section >> marks;

        Student stu2 = Student(id, name, section, marks);

        cin >> id >> name >> section >> marks;

        Student stu3 = Student(id, name, section, marks);

        if (stu1.total_marks >= stu2.total_marks && stu1.total_marks >= stu3.total_marks)
        {
            cout << stu1.id << " " << stu1.name << " " << stu1.section << " " << stu1.total_marks << endl;
        }
        else if (stu2.total_marks >= stu1.total_marks && stu2.total_marks >= stu3.total_marks)
        {
            cout << stu2.id << " " << stu2.name << " " << stu2.section << " " << stu2.total_marks << endl;
        }
        else
        {
            cout << stu3.id << " " << stu3.name << " " << stu3.section << " " << stu3.total_marks << endl;
        }
    }

    return 0;
}