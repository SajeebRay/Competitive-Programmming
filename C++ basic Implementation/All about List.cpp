#include<iostream>
#include<algorithm>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    list<int> mylist;
    list<int>::iterator it;
    list<float>::iterator it2;

    mylist.push_back(52);
    mylist.push_back(58);
    mylist.push_back(66);
    mylist.push_front(10);
    mylist.push_front(1);
    // main list
    for (it = mylist.begin(); it != mylist.end(); it++)
        cout << *it << "\t";
    cout << endl << " this is reverse value: ";
    // reversing
    mylist.reverse();
    //output path
    for (it = mylist.begin(); it != mylist.end(); it++)
        cout << *it << "\t";
    //now use find function
    it = find(mylist.begin(), mylist.end(), 66);
    cout << endl << "This is the find operation, here the it pointer value is: " << *it << endl;
    //now insert a number in the position of 66
    mylist.insert(it, 666);
    for (it = mylist.begin(); it != mylist.end(); it++)
        cout << *it << "\t";
    //now operate the erase function
    it = mylist.begin() + 5;
    mylist.erase(it);
    cout << " after deletion"
    for (it = mylist.begin(); it != mylist.end(); it++)
        cout << *it << "\t";

    /*********************************************/
    cout << "Another" << endl;

    list<float> list2 (5, 2);

    for (it2 = list2.begin(); it2 != list2.end(); it2++)
        cout << *it2 << "\t";

    return 0;
}
