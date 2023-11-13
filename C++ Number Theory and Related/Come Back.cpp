 #include<iostream>
 #include<cstdlib>
 #include<algorithm>
 #include<string>
 #include<vector>
 #include<map>
 #include<set>
 #include<cmath>
 #include<iterator>
 #include<cstdint>
 #define v vector<int>
 #define vi vector<int> :: iterator
 #define mod 1000007
 #define pb push_back

 using namespace std;
 using uu = uint64_t;

faster(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
}
int main()
{
    faster();
    int a;
    /*************** 2D vector ******************/
    vector<vector<int> > vec(3, vector<int>(3));
    for (int i  = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> a;
            vec[i][j] = a;
        }
    }

    /*for (int i  = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << vec[i][j] << endl;
        }
    }*/

    /*************** 2D string ******************/
    string str[10];
    for (int i = 0; i < 10; i++){
        cin >> str[i];
    }
    /*************** map ******************/
    map<int, string> mp2;
    int k = 0;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < vec[i].size(); j++){
        mp2[vec[i][j]] = str[k++];
    }
    //mp2.erase(mp2.begin(), mp2.find(3));
    map<int, string> :: iterator itr;
    for (itr = mp2.begin(); itr != mp2.end(); itr++){
        cout << itr->first << " " << itr->second << endl;
    }
    return 0;
}
