#include<iostream>
using namespace std;

int main()
{
    int arra[10] = {2, 3, 34, 344, 2345, 3333, 6454, 6456, 7777, 9999};
    int target = 6455;
    int mid, left = 0, right = 9;
    while(left <= right){
        mid = (left+right) / 2;
        if (arra[mid] == target){
            cout << "Position is: " << mid+1 << endl;
            cout << "Element is: " << arra[mid] << endl;
            return 0;
        }
        else if (arra[mid] < target){
            left = mid+1;
        }
        else {
            right = mid-1;
        }
        cout << "left: " << left << " Mid: " << mid << " Right: " << right << endl;
    }
    cout << "Not present this element in this array." << endl;

    return 0;
}
