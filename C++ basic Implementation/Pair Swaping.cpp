#include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair<int, string> p1;
    pair<int, string> p2;

    p1 = make_pair(22, "sajeeb");
    p2 = make_pair(20, "jawad");

    p1.swap(p2); // this the simple function of swap

    cout << p1.first << " " <<  p1.second <<endl;
    cout << p2.first << " " << p2.second << endl;

    return 0;
}
