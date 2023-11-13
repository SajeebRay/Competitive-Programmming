//Count, Max, sort, length for integer type arra
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a[] = {10,2,8,5,6,9,4,3,4,8,44,0};
    int l = sizeof(a) / sizeof(a[0]);
    //sort
    sort(a, a+l);
    for (int i = 0; i < l; i++)
        cout << a[i] << " ";
    //max
    int *max;
    max = (a, a+11);
    cout << endl << "max = " << *max <<endl;
    //min
    int min;
    min = *max_element(a, a+11);
    cout << "min = " << min <<endl;
    // count
    cout << "count now: ";
    int d = count(a, a+l, *max);
    cout << d << endl;
    //binary scarch
    if (binary_search(a, a+l, 44))
        cout << " 44 is found" << endl;
    else
        cout << " 44 is not found" << endl;


    return 0;
}

