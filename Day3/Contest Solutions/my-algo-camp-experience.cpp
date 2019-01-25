#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,t,z;
    scanf("%d %d %d", &n, &t, &z);
    
    int x,y;
    scanf("%d %d", &x, &y);
    
    int result = 0;
    for(int a,b,i=0;i<t;i++){
        scanf("%d %d", &a, &b);
        
        int dist = abs(x-a) + abs(y-b);
        
        if(dist <= z) result++;
    }
    
    printf("%d ", result);
    return 0;
}

