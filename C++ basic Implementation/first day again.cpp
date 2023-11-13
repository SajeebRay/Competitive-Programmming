#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your name: ";
    string name;
    getline(cin, name);
    cout << "My name is " << name << endl;

    return 0;
}
