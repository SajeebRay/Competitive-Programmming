#include<bits/stdc++.h>

#define pb push_back()
#define lli long long int
#define mod 10000007
#define REP(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vc vector<char>
#define vit vector<int>::iterator
#define vct vector<char>::iterator
#define white 0
#define gray 2
#define black 3

using namespace std;
using ui = uint64_t;
faster(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
}
file_i_o(){
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
}
int x, y, nodes, edges;
int color[10001];
int sTime[10001];
int eTime[10001];
int cnt = 0;
vector<int> vec[10001];

void dfs(int x)
{
    cnt++;
    color[x] = gray;
    sTime[x] = cnt;

    for (int i = 0; i < vec[x].size(); i++){
        if (color[vec[x][i]] == white)
            dfs(vec[x][i]);
    }
    cnt++;
    color[x] = black;
    eTime[x] = cnt;
}
void printVector(const vector<int> *vec){
    for (int i = 0; i < nodes; i++){
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    faster();
    file_i_o();

    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++){
        cin >> x >> y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    printVector(vec);
    for (int i = 0; i < nodes; i++)
        dfs(i);
    for (int i = 0; i < nodes; i++){
        if(color[i] == black)
            cout << i << " ";
    }
    cout << endl;
    cout << "Node be. gray\tblack" << endl;
    for (int i = 0; i < nodes; i++){
        cout << i << "\t\t" << sTime[i] << "\t\t" << eTime[i] << endl;
    }


    return 0;
}
