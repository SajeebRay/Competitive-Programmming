#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<iterator>

using namespace std;

vector<string> tag_name;
map<string, string> line;

int main()
{
    int m, q;
    cin >> m >> q;
    string str;
    char ch;
    cin >> str;
    cout << str.back();
    cin >> ch;
    cout << ch << endl;
    if(cin.peek() == '/') cout << "Yes";

    return 0;
}
