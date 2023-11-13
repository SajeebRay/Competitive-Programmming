/***********JoyGuru************
 *                            *
 *  Author: Sajeeb Kumar Ray  *
 *       User id: s_aj        *
 *                            *
 ******************************/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int m1[11][11], m2[11][11];
int main()
{
  int h1, h2, w1, w2, k , l;
  cin >> h1 >> w1;
  for(int i = 1; i<=h1; i++)
    for(int j = 1; j<=w1; j++){ 
      cin >> m1[i][j];
  }
  cin >> h2 >> w2;
  for(int i = 1; i<=h2; i++)
    for(int j = 1; j<=w2; j++){
      cin >> m2[i][j];
  }


  k = 1; l =1;
  bool flag = false;
  for(int j = 1; j<=w1; j++){
    for(int i = 1; i<=h1; i++){
      if(m1[i][j] == m2[k][l]){
        k++;
      }
    }
    if(k-1 == h2 && l == w2){
      flag = true;
      break;
    }
    if(k-1 == h2){
      l++;
      k = 1;
    }
    else{
      k = 1;
    }
  }
  if(flag) cout << "Yes";
  else cout << "No";

  return 0;
}
