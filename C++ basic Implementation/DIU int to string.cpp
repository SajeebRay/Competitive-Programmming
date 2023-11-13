#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
#include<sstream>

using namespace std;

vector<int>  makeBinary(int n);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n = 8, m = 888, number;
    //cin >> n >> m;
    stringstream ss, ss2, ss3;
    ss << n;
    string str1, str2;
    ss >> str1;
    ss2 << m;
    ss2 >> str2;
    str1.append(str2); // adding two string
    ss3 << str1;
    ss3 >> number;

    vector<int> vec = makeBinary(number);

    int c1 = 0, c2 = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 0)
            c1++;
        else
            c2++;
    }
    if (c1 == c2)
        cout << "Ei jah! Draw Draw Draw reeee!";
    else if (c1 > c2)
        cout << "DUSTO tumi Jitso.";
    else
        cout << "Jitsi re jitsi. Eibar ami Jitsi!";
    cout << "\n";

    return 0;
}
vector<int>  makeBinary(int n)
{
    vector<int> vec;
    while (n > 0)
    {
        int num = n % 2;
        vec.push_back(num);
        n /= 2;
    }
    for (auto d : vec)
        cout << d << " ";
    cout << "\n";

    return vec;
}
