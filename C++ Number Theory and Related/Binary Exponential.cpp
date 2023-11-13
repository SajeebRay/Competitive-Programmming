/*#include<iostream>
#define llu unsigned long long

using namespace std;

void file_i_o()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef io
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif // io
}
inline llu power(llu a, llu b, llu c)
{
    a %= c;

    /** This is another way

    llu res = 1;
    while (b > 0){
        if (b % 2){
            res = res * a % c;
            b--;
        }
        a = a * a % c;
        b /= 2;
    }
    return res % c;
    **********************************
    if (b == 0)
        return 1;
    cout << b << "x ";
    llu pow = power(a, b/2, c);
    cout << pow << " ";
    if (b % 2)
        return pow * pow * a % c;
    else
        return pow * pow % c;
}
int main()
{
//    file_i_o();
    int t;
    llu x, y, z;

    cin >> x >> y;
    cin >> z;
    cout << power(x, y, z) << endl;



    //cout << x << " to the power " << y << " is " << power(x, y);
    return 0;
}
*/

#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define endl '\n'

using namespace std;

lli mulmod(lli a, lli b,lli c){
    lli x = 0,y=a%c;
    while(b > 0){
    if(b%2 == 1){
        x = (x+y)%c;
    }
    y = (y*2LL)%c;
    b /= 2;
    }
    cout << "X Y" << x << " " << y << endl;
    return x%c;
}

lli binPower(lli a , lli n , lli mod)
{
	lli res = 1;

	while(n)
	{
		if(n & 1)
		res = mulmod(res , a , mod);

		n >>= 1;
		a = mulmod(a , a , mod);
	}

	return res % mod;
}

bool isPrime(lli n , int iterations = 5)
{
	if(n <= 4)
	return n == 2 || n == 3;

	for(int i=1;i<=iterations;i++)
	{
		lli a = 2 + rand() % (n - 3);
		lli res = binPower(a , n - 1 , n);

		if(res != 1) return false;
	}

	return true;
}

int main()
{
	lli t , n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(isPrime(n)) cout<<"YES"<<endl;
		else		   cout<<"NO"<<endl;
	}
}

