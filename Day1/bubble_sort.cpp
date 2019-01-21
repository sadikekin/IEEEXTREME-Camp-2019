#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> arr = {1, 3, 4, 5, 2, 3, 5};

    for(int i=0;i<arr.size();i++)
        for(int j=i+1;j<arr.size();j++)
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);

    for (auto &el : arr)
        printf("%d ", el);
    
    printf("\n");
    return 0;
}