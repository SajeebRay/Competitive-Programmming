#include<iostream>
#include<string>

 using namespace std;

int main()
{
    string s4 = "Tetrahedron";
    string s6 = "Cube";
    string s8 = "Octahedron";
    string s12 = "Dodecahedron";
    string s20 = "Icosahedron";

    int n;
    cin >> n;
    string *str;
    str = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == s4)
            count += 4;
        else if (str[i] == s6)
            count += 6;
        else if (str[i] == s8)
            count += 8;
        else if (str[i] == s12)
            count += 12;
        else
            count += 20;
    }
    cout << count;

    return 0;
}
