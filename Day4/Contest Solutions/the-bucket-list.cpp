#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,a,b,c;
    scanf("%d",&t);
        
    vector<int> needed_buckets(1005, 0);
    
    while(t--){
        scanf("%d %d %d", &a, &b, &c);
        
        for(int i=a;i<=b;i++){
            needed_buckets[i] += c;
        }
    }
    
    int max_val = 0;
    
    for(int i=0;i<needed_buckets.size();i++)
        max_val = max(max_val, needed_buckets[i]);
    
    printf("%d\n", max_val);
    
    return 0;
}

