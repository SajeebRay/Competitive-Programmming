#include<iostream>
#include<map>
#include<vector>
#include<stdio.h>

using namespace std;

int main()
{
    map<string, int> mp;
    map<string, int>:: iterator it;
  /*  // manual input
    mp["Sajeeb"] = 22;
    mp["Naima"] = 01;
    mp["Jawad"] = 07;
    mp.insert(make_pair("Dibakor", 27));

    */int n;
    cin >> n;
    for (int i = 0; i < n; i++) // having trouble
    {
        int data;
        string str;
        cin >> data >> str;
        mp.push_back(make_pair(string, data));
    }
    //map<string, int>::iterator it; // Another way to consol out of a map
     for (it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " " << it->second << endl;

    return 0;
}
