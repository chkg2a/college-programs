#include<iostream>
using namespace std;

const int MAX = 100;
int adj[MAX][MAX];
bool visited[MAX];
int queue[MAX];
int n, m;

void BFS(int start){
    int front = 0, rear = 0;
    queue[rear++] = start;
    visited[start] = true;
    while(front < rear){ int node = queue[front++];
        cout << node << " ";
        for(int i = 0; i < n; ++i){
            if(adj[node][i] && !visited[i]){
                queue[rear++] = i;
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
    BFS(0);
    return 0;
}
