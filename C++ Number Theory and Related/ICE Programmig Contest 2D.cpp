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
#define ulli unsigned long long int
#define lli long long int
#define mod 10000007
#define REP(i, n) for (lli i = 0; i < n; i++)
#define vi vector<int>
#define vc vector<char>
#define vit vector<int>::iterator
#define vct vector<char>::iterator

using namespace std;
/*********** error. this time i'm don't even know what is greedy **/
int main()
{

//	freopen("Input.txt", "r", stdin);
//	freopen("Output.txt", "w", stdout);
    long long int n;
    int B[100001], A[200001];
    cin >> n;
    REP(i, n/2){
        cin >> B[i];
    }
    REP(i, n){
        if(B[i] > 0){
            A[i] = B[i] - 1;
            A[n-i+1] = B[i] - A[i];
        }
        else{
            A[i] = 0;
            A[n-i+1] = 0;
        }
        cout << "yes";

    }
    REP(i, n)
        cout << A[i] << " ";
    cout << endl;


    return 0;
}
