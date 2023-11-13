#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void fn();
int main()
{
    int t;cin>>t;
    while(t--)
    {
    fn();
    }
    return 0;
}
void fn()
{
    ll a1,a2,a3,a4;cin>>a1>>a2>>a3>>a4;
    ll a=a1,b=a1;
    ll n=a1;ll x;
    while( a2>0 || a3>0 ||a4>0)
    {
        if(b>0 && a2>0)
        {
            x= min(b,a2);
            b-=x;a+=x;a2-=x;n+=x;
        }
        else if(a>0 && a3>0)
        {
        x= min(a3,a);
        a-=x;b+=x;n+=x;a3-=x;
        }
        else if(a>0 && b>0 && a4>0)
        {
        x= min(a4,min(a,b));n+=x;
        a-=x;b-=b;a4-=x;
        }
        else {
            if(a2!=0 || a3!=0 || a4!=0) n++;
            break;
        }
        
    }
    cout<<n<<endl;
}