#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

vector<vector<string>> tshirt_vector;
map<string, int> t_count_map;
vector<string> tshirt_size_list = {"XXS", "XS", "S", "M", "L", "XL", "XXL"};

bool is_possible;
void dfs(int current_person){
    if(current_person == tshirt_vector.size()) is_possible = true;
    
    if(current_person >= tshirt_vector.size()) return;
    
    if(is_possible) return;
    
    for(int i = 0; i < tshirt_vector[current_person].size(); i++){
        string current_tshirt_size = tshirt_vector[current_person][i];
        t_count_map[current_tshirt_size]--;
        if(t_count_map[current_tshirt_size] >= 0) dfs(current_person+1);
        t_count_map[current_tshirt_size]++;
    }
    

    
}

int main() {
    int t,a,b;
    scanf("%d", &t);
    
    string k,l,m;
    while(t--){
        is_possible = false;
        
        tshirt_vector.clear();
        t_count_map.clear();
        
        scanf("%d %d", &a, &b);
        
        for(int i=0;i<tshirt_size_list.size();i++)
            t_count_map[tshirt_size_list[i]] = b / 7;
        
        while(a--){
            cin >> k >> l >> m;
            
            tshirt_vector.push_back({k, l, m});
        }
        
        dfs(0);
            
        printf(is_possible ? "YES\n" : "NO\n");
    }
    return 0;
}

