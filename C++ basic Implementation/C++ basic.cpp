#include<iostream>>
using namespace std;

int exponen(int baseNum, int powNum)
{
    int result = 1;
    int i;
    for (i = 1; i <= powNum; i++)
        result = result * baseNum;

    cout << baseNum << " ^ " << powNum << " is: " << result << endl;
}
int main()
{
    int base, pow;
    cin >> base >> pow;
    exponen(base, pow);


    return 0;
}
