#include <iostream>
#define ll long long int
using namespace std;

int main() {
	ll t; 
	cin >> t;
	while(t--){
	    ll x, y, z;
	    cin >> x  >> y >> z;
	    ll ans = 0, xc = 0, yc = 0, zc  = 0;
	    if(x > 0){
	        ans++;
	        xc = x-1;
	    }
	    if(y>0) {
	        ans++;
	        yc = y-1;
	    }
	    if(z>0){
	        ans++;
	        zc = z-1;
	    }
      if(xc < zc) swap(zc,xc);
	    if(yc > 0 && xc > 0){
	        ans++;
          yc--;
          xc--;
	    }
      if(yc > 0 && zc >0){
        ans++;
        yc--;
        zc--;
      }
      if(xc > 0 && zc >0){
        ans++;
        xc--;
        zc--;
      }
	    cout << ans << endl;
	}
	return 0;
}
