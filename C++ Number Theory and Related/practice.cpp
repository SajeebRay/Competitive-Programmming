/*#include<bits/stdc++.h>

#define pb push_back
#define lli long long int
#define mod 10000007
#define REP(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vc vector<char>
#define vit vector<int>::iterator
#define vct vector<char>::iterator
#define white 1
#define gray 2
#define black 3

using namespace std;
using ui = uint64_t;
vector<int> vec[10001];
queue<int> qq;
queue<int> qc;
int color[10001];
int dis[10001];
int parent[10001];
int nodes, edges, x, y;

faster(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
}
file_i_o(){
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
}
void initialize(){
    for (int i = 0; i < nodes; i++){
         parent[i] = -1;
         dis[i] = INT_MIN;
         color[i] = white;
    }
}
void bfs(int x){
    parent[x] = -1;
    dis[x] = 0;
    qq.push(x);

    while (!qq.empty()){
        int l = qq.front();
        color[l] = gray;
        qq.pop();
        qc = qq;
        cout << l << " ";
        for (int j = 0; j < vec[l].size(); j++){
            if (color[vec[l][j]] == white){
                qq.push(vec[l][j]);
                parent[vec[l][j]] = l;
                dis[vec[l][j]] =  dis[l] + 1;
            }
        }
        cout << "Queue is now: ";
        while (!qc.empty()){
            cout << qc.front() << " ";
            qc.pop();
        }
        cout << endl;
        color[l] = black;
    }
}
int main()
{
    faster();
    file_i_o();

    cin >> nodes >> edges;
    for(int i = 0; i < edges; i++){
        cin >> x >> y;
        vec[x].pb(y);
        vec[y].pb(x);
    }
    for(int i = 0; i < nodes; i++){
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
    initialize();
    bfs(0);

    return 0;
}
*/
/* //problem
#include<bits/stdc++.h>

#define pb push_back
#define lli long long int
#define mod 10000007
#define REP(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vc vector<char>
#define vit vector<int>::iterator
#define vct vector<char>::iterator

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    lli x, N, maxi = -1;
    cin >> N;
    vector<lli>a(100005, 0);
    for (lli i = 0; i < N; i++){
        cin >> x;
        a[x]++;
        maxi = max(maxi, x);
    }
    vector<lli>b(100005, 0);
    b[0] = 0;
    b[1] = a[1];
    for (lli i = 2; i < 100000; i++){
        b[i] = max(b[i-1], b[i-2] + (a[i]*i));
    }
    cout << b[maxi] << "\n";

    return 0;
}
*/

#include<bits/stdc++.h>

#define pb push_back
#define lli long long
#define mod 10000007
#define endl '\n'
#define REP(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vc vector<char>
#define vit vector<int>::iterator
#define vct vector<char>::iterator
#define pi 3.1415926535
#define faster ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define file_i_o freopen("Input.txt", "r", stdin), freopen("Output.txt", "w", stdout);

using namespace std;
using ui = uint64_t;
void solve(){
    vi vec;
    int N, copyN, m;
    cin >> N;
    copyN =  N;
    for (int i = 0; i < N; i++){
        cin >> m;
        vec.pb(m);
    }
    for (int i = 0; i < N-1; i++){
        if ((vec[i] + vec[i+1]) % 2 != 0){
            if (((vec[i] + vec[i-1]) % 2 == 0) && i > 0){
                swap(vec[i+1], vec[copyN-1]);
            }
            else {
                swap(vec[i], vec[copyN-1]);
                if ((vec[i] + vec[i+1]) % 2 != 0)
                    i--;
            }
            copyN--;
        }
        if (copyN <= i+1)
            break;
        else
            continue;
    }
    for(auto x : vec)
        cout << x << " ";
    cout << endl;
}
int main()
{
    faster;
//    file_i_o;
    int t;
    cin >> t;
    while(t--){

    solve();

    }
    return 0;
}
