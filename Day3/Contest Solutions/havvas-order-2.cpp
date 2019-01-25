#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


vector<bool> visited;
void pre_order(vector<vector<int>> &tree, int current_node){
    
    printf("%d ", current_node+1);
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
    
    printf("%d ", current_node+1);
}


int main() {
    int t;
    
    scanf("%d", &t);
    
    while(t--){
        int n;
        scanf("%d", &n);
        
        vector<vector<int>> tree(n);
        
        for(int a,b,i=0;i<n-1;i++){
            scanf("%d %d", &a, &b);
            
            tree[a-1].push_back(b-1);
            tree[b-1].push_back(a-1);
        }
        
        
        for(int i=0;i<tree.size();i++){
            sort(tree[i].begin(), tree[i].end());
        }
        
        visited.clear();
        visited.resize(n, false);
        
        visited[0] = true;
        visited[tree[0][0]] = true;
        pre_order(tree, tree[0][0]);
        
        printf("1 ");
        
        visited[tree[0][1]] = true;
        post_order(tree, tree[0][1]);
        
        printf("\n");
        
        
    }
    return 0;
}

