#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int find_root(vector<int> &root_vec,int x){
    vector<int> temp;

    while(x != root_vec[x]){
        temp.push_back(x);

        x = root_vec[x];
    }

    for(int i=0;i<temp.size();i++){
        root_vec[temp[i]] = x;
    }

    return x;
}

void make_union(vector<int> &root_vec, int x, int y){
    x = find_root(root_vec, x);
    y = find_root(root_vec, y);

    root_vec[x] = y;
}

int main(){
    int n = 7;
    vector<int> root_vec(7);
    for(int i=0;i<n;i++)
       root_vec[i] = i;

    make_union(root_vec, 0,1);
    make_union(root_vec, 5,6);
    make_union(root_vec, 1,2);
    make_union(root_vec, 2,3);
    make_union(root_vec, 3,4);
    make_union(root_vec, 4,5);
  

    for(int i=0;i<root_vec.size();i++){
        cout << root_vec[i] << " ";
    }
    cout << endl;

    find_root(root_vec, 0);

    for(int i=0;i<root_vec.size();i++){
        cout << root_vec[i] << " ";
    }
    cout << endl;
     
}