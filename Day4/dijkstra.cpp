#include <iostream>
#include <queue>
#include <vector>
#include <climits>

using namespace std;


int dijkstra(vector<vector<pair<int ,int>>> &graph, int a, int b){
    vector<int> distance(graph.size(), INT_MAX);
    distance[a] = 0;

    priority_queue<pair<int,int> ,vector<pair<int,int> >, greater<pair<int,int>>> q;

    q.push(make_pair(0, a));

    while(!q.empty()){
        pair<int, int> current_pair = q.top();
        q.pop();

        int current_distance = current_pair.first, current_node = current_pair.second;

        if(current_distance <= distance[current_node]){
            for(int i=0;i<graph[current_node].size();i++){
                int next_node = graph[current_node][i].first;
                int distance_between = graph[current_node][i].second;

                int distance_until_now = current_distance + distance_between;
                if(distance_until_now < distance[next_node]){
                    q.push(make_pair(distance_until_now, next_node));
                    distance[next_node] = distance_until_now;
                }
            }
        }
    }

    return distance[b];

}

int main() {
    int n = 5;
    vector<vector<pair<int ,int>>> graph(n);

    graph[0] = {{1, 2}, {2, 10}};
    graph[1] = {{0, 2}, {2, 1}};
    graph[2] = {{0,10}, {1,1}, {3, 4}, {4,1}};
    graph[3] = {{2, 4}, {4, 1}};
    graph[4] = {{2, 1}, {3, 1}};
    

    int shortest_dist = dijkstra(graph, 0, 3);

    printf("%d \n", shortest_dist);

}