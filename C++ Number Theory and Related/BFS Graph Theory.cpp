#include<iostream>
#include<queue>
#define white 1
#define gray 2
#define black 3

using namespace std;

queue<int> q;
int node, edges;
int arr[100][100];
int color[100];
int parent[100];
int dis[100];

void bfs(int startingNode)
{
    for (int i = 0; i < node; i++){
        color[i] = white;
        parent[i] = -1;
        dis[i] = INT_MIN;
    }
    parent[startingNode] = -1;
    dis[startingNode] =0;
    q.push(startingNode);

    while(!q.empty()){
        int f = q.front();
        color[f] = gray;
        q.pop();
        cout << f << endl;

        for(int i = 0; i < node; i++)
            if (arr[f][i] == 1 && color[i] == white){
                q.push(i);
                dis[i] = dis[f] + 1;
                parent[i] = f;
            }
        color[f] = black;
    }
}
int main()
{
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);

    int x, y;
    cin >> node >> edges;
    for (int i = 0; i < edges; i++){
        cin >> x >> y;
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    bfs(0);
    return 0;
}
