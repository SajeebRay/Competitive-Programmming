#include<bits/stdc++.h>  //CPP header

using namespace std;  //CPP namespache

int main()
{
    double a, b, c;
    cout << "Enter a, b then c: "; //print  Enter a, b then c:
    cin >> a >> b >> c; //input a b c

    double D = (b*b) - (4*a*c); //calculate D
    if (D == 0){
        double x = (-b) / (2*a);
        cout << "X1 is: " << x << endl;  //print X1
        cout << "X2 is: " << x << endl;  //print X2
    }
    else if(D > 0){
        double x1 = (-(sqrt(D)+b)) / (2*a);  //sqrt() is also exist in C. Use #include<math.h> header
        double x2 = (sqrt(D)-b) / (2*a);
        cout << "X1 is: " << x1 << endl;  //print X1
        cout << "X2 is: " << x2 << endl;  //print X2
    }
    else {
        double m = (-b) / (2*a);
        double n = sqrt(-D) / (2*a);
        cout << "X1 is: " << m << "+" << n << "i" << endl;
        cout << "X2 is: " << m << "-" << n << "i" << endl;
    }
    return 0;
}
