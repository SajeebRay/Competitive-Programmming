#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;
    int i, n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        string sr;
        cin >> sr;
        s.push(sr);
    }
    while(1)
    {
        string str = s.top();
        cout <<str << endl;
        s.pop();
    }

    return 0;
}
