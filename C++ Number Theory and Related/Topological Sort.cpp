#include<iostream>
#include<vector>
#include<stack>

#define white 1
#define gray 2
#define black 3

using namespace std;

int nodes, edges;
stack<int> st;
vector<int> vec[1000];
vector<int> color;
//int color[1000];

void dfs(int x)
{
    color[x] = gray;
    for (int i = 0; i < vec[x].size(); i++){
        if(color[vec[x][i]] == white){
            dfs(vec[x][i]);
        }
    }
    color[x] = black;
    st.push(x);
}
void dfsVisit()
{
    for (int i = 0; i < nodes; i++)
        //color[i] = white;
        color.push_back(white);
    for (int i = 0; i < nodes; i++)
        dfs(i);
}
void print()
{
    for (int i = 0; i < nodes; i++){
        cout << st.top() << " ";
        st.pop();
    }
}
int main()
{
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);

    cin >> nodes >> edges;
    int x, y;

    for (int i = 0; i < edges; i++){
        cin >> x >> y;
        vec[x].push_back(y);
    }
    dfsVisit();
    print();

    return 0;
}
