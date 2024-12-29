#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    string country;
};

int main()
{

    Cricketer *dhoni = new Cricketer;
    dhoni->country = "India";
    dhoni->jersey_no = 23;

    Cricketer kohli;
    kohli.country = dhoni->country;
    kohli.jersey_no = dhoni->jersey_no;

    cout << kohli.jersey_no << " " << kohli.country;

    delete dhoni;

    cout << endl;

    cout << dhoni->jersey_no << " " << dhoni->country;

    return 0;
}