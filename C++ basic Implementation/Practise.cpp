/* //memory allocation
#include<iostream>

using namespace std;

int main()
{
    int *p = NULL;
    p = new(nothrow) int;
    if (!p)
        cout << "Allocation failed 1" << endl;
    else
    {
        *p = 29;
        cout << *p << endl;
    }

    float *x = NULL;
    x = new float(34.4);
    if (!x)
        cout << "Allocation failed 2" << endl;
    else
    {
        cout << *x << endl;
    }
    int n = 5;
    int *arra = NULL;
    arra = new(nothrow) int[n];
    if (!arra)
        cout << "Allocation failed 3" << endl;
    else
    {
        for (int i = 1; i <= n; i++)
            arra[i-1] = n + i;
        for (int i = 0; i < n; i++)
            cout << arra[i] << " ";
    }

    return 0;
}*/
/** //type casting
#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>

using namespace std;

int main()
{
    typedef double d;
    d m, n;
    m = 100/33;
    n = 10/3;

    if (m == n)
        cout << "They are same" << endl;

    cout << "m: " << fixed << setprecision(20) << m << " n: " << n;

    return 0;
}
*/
/*
#include<iostream>
#include<sstream>
#include<vector>

using namespace std;

vector<int> create(string str)
{
    stringstream ss;
    ss << str;
    vector<int> vec;
    int n;
    char ch;
    while (ss)
    {
        if (ss.peek() != ',')
        {
            if (ss >> n)
                vec.push_back(n);
        }

        else
            ss >> ch;

    }
    return vec;
}
int main()
{
    string str = "5,45,22";
    vector<int> vec = create(str);

    for (unsigned i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }

    return 0;
}
*/

/* //here  practice string addition
#include<iostream>
#include<vector>
#include<iterator>
#include<set>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> vec = {2,3,4,5,6,7,8,9};
    set<int> s = {vec.begin(), vec.end()};
    set<int>:: iterator it2;
    vector<int>:: iterator it;

    it = upper_bound(vec.begin(), vec.end(), 0);
    cout << "Difference is: " << distance(vec.begin(), it) << endl;
    it = lower_bound(vec.begin(), vec.end(), 0);
    cout << "Difference is: " << distance(vec.begin(), it) << endl;

    //it2 = upper_bound(vec.begin(), vec.end(), 7); // not working yet
    it2 = lower_bound(s.begin(), s.end(), 0);
    cout << (it2 != s.end() ? to_string(*it2) : "Not found") << endl;
    cout << "Difference is: " << distance(s.begin(), it2) << endl;

    return 0;
}
*/

/*
#include<stdio.h> // include
int main() { //don't use void inside paranthasis; and return type int
    int a = 48, b ;
    while( a < 100 )
    float b = a++;
    printf( "The value of a = %c and b =  %010d\n", b , a );
    // /* printf (nothing). /* ;
    return 100 ;
}
*/


#include <bits/stdc++.h>

using namespace std;

 long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    cout << res << " ";
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long p;
	long long a;
		cin >> a >> p;

		cout << binpow(a, p) << "\n";

	return 0;
}
