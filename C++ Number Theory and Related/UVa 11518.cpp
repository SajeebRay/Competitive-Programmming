#include<iostream>
#include<vector>
#define SIZE 10004

using namespace std;

bool dfsVisit[SIZE];
vector<int> vec[SIZE];

void dfs(int n)
{
    dfsVisit[n] = true;
    for(int i = 0; i < vec[n].size(); i++){
        int x = vec[n][i];
        if (dfsVisit[x] == false)
            dfs(x);
    }
}

int main()
{
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);

    int t, n, m, l, x, y;
    cin >> t;
    while (t--){
        cin >> n >> m >> l;

        for(int i = 0; i <= n; i++){
            vec[i].clear();
            dfsVisit[i] = false;
        }
        for (int i = 1; i <= m; i++){
            cin >> x >> y;
            vec[x].push_back(y);
        }
        int z;
        for(int i = 0; i < l; i++){
            cin >> z;
            dfs(z);
        }
        int cnt = 0;
        for(int i = 0; i <= n; i++){
            if (dfsVisit[i] == true)
                cnt++;
        }
        cout << cnt << endl;
    }
}
