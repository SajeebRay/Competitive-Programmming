#include<iostream>
#include<iomanip>
#include<stdio.h>

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c  >> d;
    cin >> fixed;
    cout << "A = " << setprecision(10) << a << ", B = " <<
        setprecision(10) << b << ", C = " << setprecision(10) << c <<
        " D = " << setprecision(10) << d << endl;
    printf("A = %10d, B = %10d, C = %10d\n", a, b, c);
    printf("A = %010d, B = %010d, C = %010d\n", a, b, c);
    printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);

    return 0;
}
