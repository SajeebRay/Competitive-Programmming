#include<iostream>
#include<climits>
#include<float.h>
#include<iomanip>

using namespace std;

int main()
{
    short s;
    int d;
    long l;
    long long ll;

    unsigned short ss;
    unsigned int dd;
    unsigned long ul;
    unsigned long long ull;

    cout << "short: " << SHRT_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;
    cout << "unsigned short: " << USHRT_MAX << endl;
    cout << "unsigned int: " << UINT_MAX << endl;
    cout << "unsigned long: " << ULONG_MAX << endl;
    cout << "unsigned long long: " << ULLONG_MAX << endl;

    enum {
        x = 10;
    } x = 50;
    cout << x;


    return 0;
}
