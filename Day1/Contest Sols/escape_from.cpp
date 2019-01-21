#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        vector<long> arr(n);

        for(auto &a : arr) scanf("%ld", &a);

        for(int i=0;i<arr.size();i++){
            long key = arr[i];
            int j = i - 1;

            while(j >= 0 && arr[j] > key){
                arr[j+1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }

        for(auto &a : arr) printf("%ld ", a);

        printf("\n");

        if(t) printf("--\n");
    }

    return 0;
}