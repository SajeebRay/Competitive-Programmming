#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric>

using namespace std;

int mulFunc(int a, int b)
{
    return (a * b);
}
int main()
{
  /************ 2D ****************/
    int k = 1;
    vector<vector<int> > data;
    vector<vector<int> >:: iterator itd;
    for(int i = 0; i < 3; i++){
        vector<int> row;
        for(int j = 0; j < 5; j++)
            row.push_back(k++);
        data.push_back(row);
    }
    //output
    reverse(data.begin(), data.end());   //is reverse only level of rows
    for(int i = 0; i < data.size(); i++){
       // reverse(data[i].begin(), data[i].end());  //is reverse the data of a row
        for(int j = 0; j < data[i].size(); j++)
            cout << data[i][j] << " ";
        cout << endl;
    }



    /********** 1D ******************/
    vector<int> vec;
    vector<int>:: iterator it;
    int n, i;
    cout << "Enter size: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        vec.push_back(value);
    }
    //sum of all elements
    cout << "Sum of all element: " << accumulate(vec.begin(), vec.end(), 0) << endl; // 0 is the initial sum
    //multiplication of all elements
    cout << "Multiplication of all elements is: " << accumulate(vec.begin(), vec.end(), 1, mulFunc) << endl;
    //Max element position
    it = max_element(vec.begin(), vec.end());
    cout << "Max is located on: " << distance(vec.begin(), it) + 1 << endl;

    // Now check upper bound and lower bound
    sort(vec.begin(), vec.end());
    for (it = vec.begin(); it != vec.end(); it++)
        cout << *it << " ";
    cout << endl;

    it = upper_bound(vec.begin(), vec.end(), 5);
    cout << "The upper bound is: " << *it << endl;
    it = lower_bound(vec.begin(), vec.end(), 5);
    cout << "The lower bound is: " << *it << endl;

    return 0;
}
