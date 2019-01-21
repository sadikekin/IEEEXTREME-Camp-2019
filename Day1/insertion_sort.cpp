#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> arr = {1, 3, 4, 5, 2, 3, 5};

    for(int i=0;i<arr.size();i++){
        int key = arr[i], j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for (auto &el : arr)
        printf("%d ", el);
    
    printf("\n");
    return 0;
}