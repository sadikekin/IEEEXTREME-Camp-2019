#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void pour(pair<int, int> &x, pair<int, int> &y){
    int temp_y_second = y.second;
    y.second = min((x.second + y.second), y.first);
    x.second = max(0, (x.second + temp_y_second) - y.first);
}

int main() {
    pair<int,int> one, two, three;
    
    scanf("%d %d", &one.first, &one.second);
    scanf("%d %d", &two.first, &two.second);
    scanf("%d %d", &three.first, &three.second);
    
    for(int i=0;i<33;i++){
        pour(one, two);
        pour(two, three);
        pour(three, one);
    }
    pour(one, two);
    
    printf("%d\n%d\n%d", one.second, two.second, three.second);
    return 0;
}

