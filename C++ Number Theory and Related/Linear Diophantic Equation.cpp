#include<iostream>
#include<algorithm>
using namespace std;
void ExtendedEuclidean(int a, int b, int &x, int &y){
    if(b == 0){
        x = 1;
        y = 0;
        return;
    }
    int x1, y1;
    ExtendedEuclidean(b, a%b, x1, y1);
    x = y1;
    y = x1 - y1 * (a/b);
}
int main()
{
    int a, b, c;
    cout << "Type three integers: ";
    cin >> a >> b >> c;
    int g = __gcd(a,b);

    if(a == 0 && b == 0 && c != 0){
        cout << "Result is: 0" << endl;
    }
    else if(a == 0 && b == 0 && c == 0){
        cout << "Result is: Infinite" << endl;
    }
    else if (c%g == 0)
    {
        int x0, y0;
        ExtendedEuclidean(a, b, x0, y0);
        int x = x0 * (c/g);
        int y = y0 * (c/g);
        cout << "Result of x and y is: " << x << " " << y << endl;
    }
    else
        cout << "NO result found" << endl;
}
