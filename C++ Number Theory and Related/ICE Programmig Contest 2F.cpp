#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<map>
#include<queue>
#include<utility>
#include<iterator>
#include<algorithm>
#include<cstdlib>
#define lli long long int
#define ulli unsigned long long int
#define mod 10000007
#define REP(i, n) for (ulli i = 0; i < n; i++)
#define vi vector<int>
#define vc vector<char>
#define vit vector<int>::iterator
#define vct vector<char>::iterator

using namespace std;

int main()
{
//	freopen("Input.txt", "r", stdin);
//	freopen("Output.txt", "w", stdout);

    lli N;
    cin >> N;
    int H[N];
    for (lli i = 0; i < N; i++)
        cin >> H[i];

    if (N == 1){
            cout << "Yes" << endl;
            exit(0);
        }
    for (lli i = N-1; i > 0; i--){
        if (H[i-1] > H[i]){
            H[i-1] -= 1;;
        }
        if (H[i-1] > H[i]){
            cout << "No" << endl;
            exit(0);
        }
    }
    for (int i = 1; i < n; i++){
        if (H[i-1] > H[i]){
            cout << "No" << endl;
            exit(0);
        }
    }
    cout << "Yes" << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);


int main()
{
    faster();

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    if(n==1) {
        cout<<"Yes"<<endl;
        return 0;
    }
    for(int i=0;i<n-1;i++){
        if(a[i] <= a[i+1]) continue;
        if(a[i]>a[i+1]) a[i+1] +=1;
        if(a[i]>a[i+1]) {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}
