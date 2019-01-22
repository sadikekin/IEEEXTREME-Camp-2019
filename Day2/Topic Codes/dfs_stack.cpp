#include <iostream>
#include <stack>
#include <vector>

using namespace std;
void bfs(vector<vector<int>> &graph, int startig_node) {
    stack<int> q;
    q.push(startig_node);

    vector<bool> visited(graph.size());
    visited[startig_node] = true;

    while(!q.empty()){
        int current_node = q.top();
        q.pop();

        printf("%d ", current_node);

        for(int i=0;i<graph[current_node].size();i++){
            int next_node = graph[current_node][i];
            if(visited[next_node] == false){
                visited[next_node] = true;
                q.push(next_node);
            }
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

    bfs(graph, 0);

    printf("\n");
}