#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void top_sort(vector<vector<int>> &graph){
    vector<int> degree(graph.size(), 0);

    for(int i=0;i<graph.size();i++){
        for(int j=0;j<graph[i].size();j++){
            int value = graph[i][j];
            degree[value]++;
        }
    }

    // for(int i=0;i<degree.size();i++) cout << degree[i] << " ";

    queue<int> q;

    for(int i=0;i<degree.size();i++){
        if(degree[i] == 0) q.push(i);
    }

    while(!q.empty()){
        int current_node = q.front();
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
    int n = 6;
    vector<vector<int>> graph(n);
    
    graph[0] = {1, 2, 5};
    graph[1] = {3, 4};
    graph[2] = {3, 4};
    graph[3] = {4, 5};
    graph[4] = {};
    graph[5] = {4};

    top_sort(graph);

    printf("\n");

    return 0;
}