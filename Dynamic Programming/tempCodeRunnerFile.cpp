#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    int n, l, sum, j, k, cnt;
    while(tt--){
        cin >> n >> l;
        sum = cnt = j = 0;
        k = n-1;
        vector<int> vec(n,0);
        vector<int> vec1(n,0);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }
        for(int i = 0; i < n; i++){
            cin >> vec1[i];
        }
        sort(vec.begin(), vec.end());
        sort(vec1.begin(), vec1.end());
        for(int i = 0; i < n; i++){
            if(vec[j] < vec1[k]){
                if(cnt >= l)
                    break;
                cnt++;
                //cout << "x " << vec[j] << " " << vec1[k] << endl;
                sum += vec1[k];
                j++;
                k--;
            }
            else{
                break;
            }
        }
        for(int i = j; i< n; i++)
            sum += vec[i];
        cout << sum << endl;
    }
    return 0;
}