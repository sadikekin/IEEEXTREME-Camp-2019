#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binary_s(vector<int> &arr, int a){
    int l = 0, r = arr.size();

    while(l <= r) {
        int m = (r + l) /2
        
        if(arr[m] == a) return true;
        
        if(arr[m] > a) r = m - 1;
        else l = m + 1;
    }
    
    return false;

    return 0;
}

int main(){
    vector<int> arr = {1, 2, 2, 4, 4, 5, 5};


    printf("%d\n", binary_s(arr, 3));
    // Library
    printf("%d\n", binary_search(arr.begin(), arr.end(), 2));
    return 0;
}
