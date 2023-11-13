
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

bool myFunc(int a, int b)
{
    return(a > b);
}
int main()
{
    vector<int> vec = {5,8,4,8,6,11,85,3};
    vector<int>::iterator it;
    int l = vec.size();
    //reverse a vector
    vector.reverse();
    sort(vec.begin(), vec.begin() + 3);
    for (int i = 0; i < l; i++)
        cout << vec.at(i) << " ";
    //sort just three elements
    sort(vec.begin(), vec.begin() + 3);
    for (int i = 0; i < l; i++)
        cout << vec.at(i) << " ";
    cout << endl;
    //sort acending order
    sort(vec.begin(), vec.end());
    for (int i = 0; i < l; i++)
        cout << vec.at(i) << " ";
    cout << endl;
    // sort decending order
    sort(vec.begin(), vec.end(), myFunc);
    for (int i = 0; i < l; i++)
        cout << vec.at(i) << " ";
    cout << endl;
    //max
    int m;
    m = *max_element(vec.begin(), vec.end());
    cout << "Max is: " << m << endl;
    //max
    int min;
    min = *min_element(vec.begin(), vec.end());
    cout << "Min is: " << min << endl;
    //count
    int c;
    c = count(vec.begin(), vec.end(), m);
    cout << c << endl;
    //search
    if (binary_search(vec.begin(), vec.end(), 11))
        cout << "11 is found" << endl;
    else
        cout << "11 is not found" << endl;
    //find
    //int loca = find(vec.begin(), vec.end(), 11);
    //cout << "and it's located on"<< loca << " position\n";

    return 0;
}
