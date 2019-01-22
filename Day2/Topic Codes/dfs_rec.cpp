#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void dfs(vector<vector<int>> &graph, int current_node, vector<bool> &visited){
    printf("%d ", current_node);

    for(int i=0;i<graph[current_node].size();i++){
        int next_node = graph[current_node][i];

        if(visited[next_node] == false){
            visited[next_node] = true;

            dfs(graph, next_node, visited);
        }
    }
}

int main() {
    // Init Graph
    vector<vector<int>> graph(5);

    // Add edge
    graph[2].push_back(0);
    graph[0].push_back(2);

    graph[1].push_back(2);
    graph[2].push_back(1);

    graph[0].push_back(3);
    graph[3].push_back(0);

    graph[3].push_back(1);
    graph[1].push_back(3);

    graph[4].push_back(1);
    graph[1].push_back(4);

    graph[0].push_back(4);
    graph[4].push_back(0);

    graph[3].push_back(2);
    graph[2].push_back(3);

    vector<bool> visited(graph.size(), false); 
    visited[0] = true;
    dfs(graph, 0, visited);

    printf("\n");

    return 0;
}