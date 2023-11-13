#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n = 10, p = 3;
    int x;
    int i = 1;
    while (n/pow(p,i) > 0){
        x += n/pow(p,i);
        i++;
    }
    cout << x << endl;
    return 0;
}
