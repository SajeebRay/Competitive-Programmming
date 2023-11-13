#include<iostream>
#include<set>

using namespace std;

int main()
{
    multiset<int > ms;
    multiset<int >:: iterator it;


    ms.insert(5);
    ms.insert(555);
    ms.insert(555);
    ms.insert(5555);
    ms.insert(55);
    for (it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
