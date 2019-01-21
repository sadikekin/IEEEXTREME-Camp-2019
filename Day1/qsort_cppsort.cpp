#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool sort_func(int a, int b){
    return a > b;
}

int main(){
    vector<int> arr = {1,4,234,345,35,64,56,2,34,2,3,654,41,2,4,234,7};

    sort(arr.begin(), arr.end(), sort_func);

    
    for (auto &el : arr)
        printf("%d ", el);
    
    printf("\n");

    return 0;
}