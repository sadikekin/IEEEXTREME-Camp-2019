#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool binarySearch(int x, vector<int> &arr) { 
    int l = 0, r = arr.size();
    while (l <= r) { 
        int m = (r + l) / 2;
  
        if (arr[m] == x) 
            return true; 
  
        if (arr[m] < x) 
            l = m + 1; 
  
        else
            r = m - 1; 
    } 
  
    return false; 
} 

// Complete the icecreamParlor function below.
pair<int, int> icecream_parlor(int m, vector<int> arr) {
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());

    map<int, int> ma;

    vector<int> output;

    for(int i=0;i<arr.size();i++) ma[arr[i]]++;
    for(int i=0;i<arr.size();i++){
        int needed = m - arr[i];
        if(needed == arr[i] && ma[arr[i]] == 1) continue;
        
        if(binarySearch(needed, sorted_arr)){
            int j = i+1;
            while(j < arr.size()){
                if(arr[j] == needed) break;
                j++;
            }  

            return make_pair(i+1, j+1);
        }
    }

    return make_pair(-1, -1);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int m, n;
        scanf("%d %d", &m, &n);

        vector<int> arr(n,0);
        for(auto &a : arr) scanf("%d", &a);

        pair<int, int> output = icecream_parlor(m, arr);

        printf("%d %d\n", output.first, output.second);

    }
}