////////////// Linear Diophantine Equation /////////////
#include<iostream>
#include<algorithm>
using namespace std;

int ExtendedEuclidianAlgorithm(int a, int b, int &x, int &y){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = ExtendedEuclidianAlgorithm(b, a%b, x1, y1);

    x = y1;
    y = x1 - y1 * (a/b);
    return d;
}
bool findSolution(int a, int b, int c, int &x, int &y){
    int x0, y0;
    int g = ExtendedEuclidianAlgorithm(abs(a), abs(b), x0, y0);
     if (c%g){
        return true;
     }
    x = x0 * (c/g);
    y = y0 * (c/g);
    if (a < 0) x = -x;
    if (b < 0) y = -y;

    return false;
}
int main()
{
    int a, b, c, x, y;
    while(1){
        cout << "a: ", cin >> a;
        cout << "b: ", cin >> b;
        cout << "c: ", cin >> c;

        if(findSolution(a, b, c, x, y))
            cout << "No solution" << endl << endl;
        else
            cout << "X and Y --> " << x << " " << y << endl << endl;
    }
    return 0;
}
