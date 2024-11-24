#include<iostream>
using namespace std;

const int MAX = 100;
int adj[MAX][MAX];
bool visited[MAX];
int stack[MAX];
int n, m;

void DFS(int start){
    int top = -1;
    stack[++top] = start;
    visited[start] = true;
    while(top!= -1){
        int node = stack[top--];
        cout << node << " ";
        for(int i = n-1; i>=0;i--){
            if(adj[node][i] && !visited[i]){
                stack[++top] =i;
                visited[i] = true;
            }
        }
    }
}

void readGraph(){
    cout << "Enter no of vertices and edges \n";
    cin >>n >>m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            adj[i][j] = 0;
    cout << "Please enter edges (u, v)\n";
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}

int main(){
    readGraph();
    for(int i =0; i < n; i++)
        visited[i] = false;
    DFS(0);
    return 0;
}
