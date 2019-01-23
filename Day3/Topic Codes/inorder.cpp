#include <iostream>
#include <vector>

using namespace std;

void in_order(vector<pair<int, int>> &tree, int current_node){
  
    // Pre-order
    // printf("%d ", current_node);

    if(tree[current_node].first)
        in_order(tree, tree[current_node].first);
    
    // In-order
    printf("%d ", current_node);
    
    if(tree[current_node].second)
        in_order(tree, tree[current_node].second);

    // Post Order      
    //printf("%d ", current_node); 
}

int main(){
    int n = 7;
    vector<pair<int, int>> tree(n);

    tree[1].first = 2;
    tree[1].second = 3;
    
    tree[2].second = 6;

    tree[3].first = 4;
    tree[3].second = 5;

    printf("In-Order: ");
    in_order(tree, 1);

    printf("\n");

}