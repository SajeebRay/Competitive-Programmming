#include<iostream>
#include<string>
#include<algorithm>
#define lli long long int
using namespace std;
/******************************time limit exited. Please help me to fix*********/
int main()
{
    lli A, B, i;
    string str;
    int Ar[10];
    cin >> A >> B;
    //A = 0; B = 99999999;
    while (B != 0){
        for(int k = 0; k < 10; k++)
            Ar[k] = 0;

        for (lli j = A; j <= B; j++){

            str = to_string(j);
            for(int m = 0; m < str.length(); m++)
                Ar[str[m]-48]++;
        }
        for (int k = 0; k < 10; k++)
            cout << Ar[k] << " ";
        cout << "\n";
        cin >> A >> B;
    }

    return 0;
}
