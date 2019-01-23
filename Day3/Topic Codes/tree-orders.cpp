#include <iostream>
#include <vector>

using namespace std;

vector<bool> visited;
void pre_order(vector<vector<int>> &tree, int current_node){
    printf("%d ", current_node);
    for(int i=0;i<tree[current_node].size();i++){
        int next_node = tree[current_node][i];
        if(!visited[next_node]){
            visited[next_node] = true;
            pre_order(tree, next_node);
        }
    }

}


void post_order(vector<vector<int>> &tree, int current_node){
    for(int i=0;i<tree[current_node].size();i++){
        int next_node = tree[current_node][i];
        if(!visited[next_node]){
            visited[next_node] = true;
            post_order(tree, next_node);
        }
    }
    printf("%d ", current_node);

}

int main(){
    int n = 7;
    vector<vector<int>> tree(n);

    visited.resize(n, false);

    tree[0].push_back(1);
    tree[1].push_back(0);

    tree[0].push_back(2);
    tree[2].push_back(0);

    tree[1].push_back(5);
    tree[5].push_back(1);

    tree[2].push_back(3);
    tree[3].push_back(2);

    tree[2].push_back(4);
    tree[4].push_back(2);

    tree[2].push_back(6);
    tree[6].push_back(2);

    printf("Pre: ");
    visited[0] = true;
    pre_order(tree, 0);

    visited.clear();
    visited.resize(n, false);
    printf("\n");
    
    printf("Post: ");
    visited[0] = true;
    post_order(tree, 0);
    printf("\n");
}