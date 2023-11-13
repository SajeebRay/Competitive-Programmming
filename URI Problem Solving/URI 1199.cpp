#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#define ulli unsigned long long int
using namespace std;

int main()
{
    string s;
    stringstream ss;
    ulli n;
    while(getline(cin, s))
    {
        if(s[1] == 'x'){
            istringstream(s) >> hex >> n;
            cout << dec << n << endl;
        }
        else{
            ss << s;
            ss >> n;
            cout << "0x" << hex << uppercase << n << endl;
        }
    }
}
