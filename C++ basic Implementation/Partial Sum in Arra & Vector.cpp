#include<iostream>
#include<vector>
#include<numeric>
#include<iterator>
//Funny adding
#include<algorithm>
#include<cstdlib>
#include<set>
#include<utility>
#include<iomanip>
#include<cmath>
#include<stack>
#include<queue>
#include<map>
#include<list>
#include<string>
#include<sstream>

using namespace std;

int myfun(int x, int y)
{
    return (2 * x + y);
}
void main1()
{
    vector <int> vec {2,2,2,2,2,2,2,2,2,2};
    cout << "Partial sum without function: ";
    /*partial_sum(vec.begin(), vec.end(),
                ostream_iterator<int>(cout, " "));*/
    partial_sum(vec.begin(), vec.end(), vec.begin());
    vector <int> vec2 {vec.begin(), vec.end()};
    for (auto resul : vec2)
        cout << resul << " ";
    cout << "\n";

    cout << "Partial sum with function: ";
    partial_sum(vec.begin(), vec.end(),
                ostream_iterator<int>(cout, " "), myfun);
}
void main2()
{
    int arra[] = {2,2,2,2,2,2,2,2,2,2};
    int ara[5];
    partial_sum(arra, arra+10, ara);
    cout << "Partial sum without function: ";
    for (int i = 0 ; i < 10; i++)
        cout << ara[i] << " ";
    cout << "\n";

    partial_sum(arra, arra+10, ara, myfun);
    cout << "Partial sum with function: ";
    for (int i = 0 ; i < 10; i++)
        cout << ara[i] << " ";
    cout << "\n";


}
int main()
{
    main1();
    cout << endl << "Control is now leave first function. Now the second one is..." << endl;
    main2();

    return 0;
}
