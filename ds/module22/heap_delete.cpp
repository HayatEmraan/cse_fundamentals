#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int vl)
{
    v.push_back(vl);

    int cur_idx = v.size() - 1;

    while (cur_idx != 0)
    {
        int par_idx = (cur_idx - 1) / 2;

        if (v[cur_idx] > v[par_idx])
            swap(v[cur_idx], v[par_idx]);
        else
            break;

        cur_idx = par_idx;
    }
}

void print_heap(vector<int> v)
{
    for (int a : v)
        cout << a << " ";
}

void delete_heap(vector<int> &v)
{
    v[0] = v.back();

    v.pop_back();
    int cur_idx = 0;

    while (true)
    {
        int left_idx = cur_idx * 2 + 1;
        int right_idx = cur_idx * 2 + 2;

        int left_val = INT_MIN, right_val = INT_MIN;

        if (left_idx < v.size())
            left_val = v[left_idx];
        if (right_idx < v.size())
            right_val = v[right_idx];

        if (left_val > right_val && left_val > v[cur_idx])
        {
            swap(v[left_idx], v[cur_idx]);
            cur_idx = left_idx;
        }
        else if (right_val > left_val && right_val > v[cur_idx])
        {
            swap(v[right_idx], v[cur_idx]);
            cur_idx = right_idx;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int vl;
        cin >> vl;
        insert_heap(v, vl);
    }

    print_heap(v);
    delete_heap(v);
    delete_heap(v);
    cout << endl;
    print_heap(v);

    return 0;
}