#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

void top_sort(vector<int> &degree, vector<vector<int>> &graph){
    priority_queue <int, vector<int>, greater<int> > q;
    
    for(int i=0;i<degree.size();i++) if(degree[i] == 0) q.push(i);
    
    while(!q.empty()){
        int current_node = q.top();
        q.pop();
        
        printf("%d ", current_node+1);
        
        for(int i=0;i<graph[current_node].size();i++){
            int next_node = graph[current_node][i];
            degree[next_node]--;
            
            if(degree[next_node] == 0){
                q.push(next_node);
            }
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    vector<vector<int>> graph(n);
    vector<int> degree(n);
    for(int a,b,i=0;i<m;i++){
        scanf("%d %d", &a, &b);
        
        graph[a-1].push_back(b-1);
        degree[b-1]++;
    }
    
    top_sort(degree, graph);
    
    return 0;
}

