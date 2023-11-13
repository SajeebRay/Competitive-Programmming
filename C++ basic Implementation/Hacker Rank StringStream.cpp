#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    stringstream ss(str);
    vector<int> out;
    char ch;
    int temp;
    while(ss >> temp)
    {
        out.push_back(temp);
        ss >> ch;
    }
}

int main()
{
    string str;
    getline(cin, str);
    vector<int> integers = parseInts(str);
    for(unsigned int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}

