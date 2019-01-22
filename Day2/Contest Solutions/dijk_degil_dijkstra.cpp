#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <climits>

using namespace std;
vector<vector<int>> graph;


struct Node {
    int currentNode;
    int currentDist;
}node;

int bfs(int a, int b){
    vector<bool> visited(graph.size(), false);
    
    queue<Node> q;
    node.currentNode = a;
    node.currentDist = 0;
    q.push(node);
    
    visited[a] = true;
    
    while(!q.empty()){
        Node cNode = q.front(); q.pop();
        
        if(cNode.currentNode == b){
            return cNode.currentDist;
        }
        
        
        for(int i=0;i<graph[cNode.currentNode].size();i++){
            int nextNode = graph[cNode.currentNode][i];
            
            if(!visited[nextNode]){
                visited[nextNode] = true;
                node.currentNode = nextNode;
                node.currentDist = cNode.currentDist+1;
                q.push(node);
            }
        }
    }
    
    return INT_MAX;
}

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n,m,a,b;
        scanf("%d %d %d %d", &n, &m, &a, &b);
        
        graph.clear();
        graph.resize(n+5);
        
        for(int c,d,i=0;i<m;i++){
            scanf("%d %d", &c, &d);
            
            graph[c].push_back(d);
        }
        
        int shortestPath = bfs(a, b);
        
        
        if(shortestPath == INT_MAX){
            printf("No Path!\n");
        }else{
            printf("%d\n", shortestPath);
        }
        
        if(t){
            printf("--\n");
        }
        
    }
    
    return 0;
}



