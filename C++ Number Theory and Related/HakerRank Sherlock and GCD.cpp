/*#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a%b);
}
int main()
{
    int arr[101];
    int N, t, flag;
    cin >> t;
    while(t--){
        cin >> N;
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        for (int i = 0; i < N-1; i++){
            for (int j = 0; j < N; j++){
                if (i != j && arr[i] > 1 && arr[j] > 1)
                    flag = gcd(arr[i], arr[j]);

            }
        }
        if (flag != 1){
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t;cin>>t;
 while (t--)
     {
         int n;
         cin>>n;
      vector <int> v(n);
      bool f=false;
      cin>>v[0];
      for (int i=1;i<n;i++)
        {cin>>v[i];
         v[i]=__gcd(v[i-1],v[i]);
         if (v[i]==1)
            f=true;
         }
      if (f) {cout<<"YES"<<endl;continue;}

      cout<<"NO"<<endl;
     }
    return 0;
}
