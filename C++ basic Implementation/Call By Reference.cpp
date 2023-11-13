#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int n1 = 5, n2 = 10;
    //int number1, number2;
    int &number1 = n1;
    int &number2 = n2;
    int temp = number1;
    number1 = number2;
    number2 = temp;
    cout << n1 << " " << n2 << endl;

    return 0;
}

/** // one variable
int main()
{
    int x = 10;
    int &refer = x;
    refer = 20;
    cout << x << endl;
    x = 30;
    cout << x << endl;

    return 0;
}
*/
