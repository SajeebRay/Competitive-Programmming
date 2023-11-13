#include<iostream>
#include<utility>
#include<vector>

using namespace std;

int main()
{
    vector < pair <int, string> > vec;
    vector < pair < int , string> >:: iterator it;
/* //manual input
    vec.push_back(make_pair(21, "Sajeeb"));
    vec.push_back(make_pair(22, "Jawad"));
    vec.push_back(make_pair(23, "Naima"));
*/
    int n;
    cout << "First data and Second string\nPair number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        string str;
        cin >> data >> str;
        vec.push_back(make_pair(data, str));
    }

    for (it = vec.begin(); it != vec.end(); it++)
        cout << it->first << " " << it->second << endl;

    return 0;
}
