#include<iostream>
#include<vector>
#include<set>
#include<iterator>

using namespace std;

multiset<int>::iterator lessThanValue(const multiset<int> &, int value);
int main()
{
    vector<int> vec {1,2,3,4,5,6,6,6,7,8,9};
    multiset<int> s = {vec.begin(), vec.end()};
    multiset<int>:: iterator it;
    it = lessThanValue(s, 8);
    cout << (it == s.end() ? "Not found" : to_string(*it)) << endl;

    return 0;
}
multiset<int>::iterator lessThanValue(const multiset<int> &ms, int value)
{
    multiset<int>::iterator it = ms.lower_bound(value);
    if (it == ms.end())
        --it;
    while (it != ms.begin() && *it >= value)
        {--it;}
    return (*it >= value ? ms.end() : it);
}
