#include<iostream>
#define white 1
#define gray 2
#define black 3

using namespace std;

int nodes, edges;
int arr[100][100];
int color[100];
int time = 1;
int sTime[100];
int fTime[100];

void print()
{
    cout << "Node   S_Time  E_Time" << endl;
    for (int i = 0; i < nodes; i++)
        cout << "  " << (char) ('A'+i) << "\t\t" << sTime[i] << "\t\t" << fTime[i] << endl;
}
void dfsVisit(int x)
{
    color[x] = gray;
    sTime[x] = time++;

    for(int i = 0; i < nodes; i++)
        if (arr[x][i] == 1 && color[i] == white)
            dfsVisit(i);

    color[x] = black;
    fTime[x] = time++;
}
void dfs()
{
    for(int i = 0; i < nodes; i++)
        color[i] = white;
    for(int i = 0; i < nodes; i++)
        dfsVisit(i);
}
int main()
{
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);

    int value1, value2;
    cout << "Nodes and Edges: As input" << "\n\n";
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++){
        cin >> value1 >> value2;
        arr[value1][value2] = 1;
        arr[value2][value1] = 1;
    }
    dfs();
    print();

    return 0;
}
