 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define ll long long


int main() {
    ll n, m;
    scanf("%lld %lld", &n, &m);
    
    vector<ll> time(n);
    
    for(ll i=0;i<n;i++) scanf("%lld", &time[i]);
    
    vector<vector<ll>> graph(n);
    
    vector<ll> degree(n);
    for(ll c,a,b,i=0;i<n;i++){
        scanf("%lld", &a);
        scanf("%lld", &b);
        
        degree[b-1] = a;
        
        while(a--){
            scanf("%lld", &c);
            graph[c-1].push_back(b-1);
        }
    }
    
    queue<ll> q;
    for(ll i=0;i<degree.size();i++) 
        if(degree[i] == 0) q.push(i);
    
    
    vector<ll> current_max_time = time;
    while(!q.empty()){
        ll current_node = q.front();
        q.pop();
        
        ll current_time = current_max_time[current_node];
        
        for(ll i=0;i<graph[current_node].size();i++){
            ll next_node = graph[current_node][i];
            
            degree[next_node]--;
            current_max_time[next_node] = max(current_max_time[next_node], current_time+time[next_node]);
            if(degree[next_node] == 0) q.push(next_node);
        }
    }
    
    printf("%lld\n", current_max_time[m-1]);
    
    
    return 0;
}

