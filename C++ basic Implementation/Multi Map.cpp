/**** The basic difference between Map and Multimap is ****/
///here, we can able to use duplicate values
#include<iostream>
#include<map>

using namespace std;

int main()
{
    multimap<string, int> mp;
    multimap<string, int>::iterator it;
    /* // this manual
    mp.insert(make_pair("Sajeeb", 21));
    mp.insert(make_pair("Sajeeb", 02));
    mp.insert(make_pair("Sajeeb", 20));
    mp.insert(make_pair("Jawad", 21));
    */
    int n;
    cout << "Give the size and input first name then number" ;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        string str;
        cin >> str;
        cin >> num;
        mp.insert(make_pair(str, num));
    }
    for (it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " " << it->second << endl;

    return 0;
}
