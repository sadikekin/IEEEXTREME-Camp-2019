#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void dfs(vector<vector<int>> &graph, int current_node, vector<bool> &visited){
    
    for(int i=0;i<graph[current_node].size();i++){
        int next_node = graph[current_node][i];
        if(!visited[next_node]){
            visited[next_node] = true;
            dfs(graph, next_node, visited);
        }
    }
    
}


int main() {
    
    int n,m;
    
    scanf("%d %d", &n, &m);
    vector<vector<int>> graph(n);
    
    for(int a,b,i=0;i<m;i++){
        scanf("%d %d", &a, &b);
        graph[a-1].push_back(b-1);
        graph[b-1].push_back(a-1);
    }
    
    vector<bool> visited(n);
    visited[0] = true;
    dfs(graph, 0, visited);
    
    bool is_connected = true;
    for(int i=0;i<n;i++){
        if(visited[i] == false) is_connected = false;
    }
    
    if(is_connected){
        printf("Connected\n");
    }else{
        printf("Not Connected\n");
    }
    
    return 0;
}

