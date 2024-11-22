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
    while(top!= -1){
        int node = stack[top--];
        if(!visited[node]){
            visited[node] = true;
            cout << node << "\t";
            for(int i = n-1; i>=0;i--){
                if(adj[node][i] && !visited[i]){
                    stack[++top] =i;
                }
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
/*
Enter number of vertices and edges:
5 6
Enter edges (u, v):
0 1
0 2
1 2
1 3
2 4
3 4*/
