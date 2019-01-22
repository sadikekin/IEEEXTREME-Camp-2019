#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Init Graph
    vector<vector<int>> graph(5);

    // Add edge
    graph[2].push_back(0);
    graph[1].push_back(2);
    graph[0].push_back(3);
    graph[3].push_back(0);


}