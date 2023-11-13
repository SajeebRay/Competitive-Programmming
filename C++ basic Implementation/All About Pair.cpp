#include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair <int, string> p;
    p.first = 21;
    p.second = "Sajeeb";

    cout << p.first << " " << p.second << endl;


    cout << "Another way is..." << endl;

    pair <int, string> pa(21, "Sajeeb");
    cout << pa.first << " " << pa.second << endl;

    return 0;
}
