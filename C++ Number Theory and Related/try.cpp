#include<iostream>

using namespace std;

int main()
{
    string str = "PARTHA SARKER";
    int i = 0;
    while(str[i] != 0){
        cout << str[i] << " " <<(int) (str[i] - 64) << endl;
        i++;
    }
}
