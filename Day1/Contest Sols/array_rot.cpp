#include <iostream>
#include <vector>


using namespace std;

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    
    vector<int> arr(n, 0);
    for(auto &a : arr) scanf("%d", &a);
    
    vector<int> new_arr(n);
    
    for(int i=0;i<n;i++){
        int new_loc = ( (i - m) + n)% n;
        new_arr[new_loc] = arr[i];
    }
    
    for(int i=0;i<n;i++){
        printf("%d ", new_arr[i]);
    }
    
    return 0;
}
