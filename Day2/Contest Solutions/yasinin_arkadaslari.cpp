#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> rootVec;

int unionFind(int b){
    
    vector<int> temp;
    while(rootVec[b] != b){
        temp.push_back(b);
        b = rootVec[b];
    }
    
    for(int i=0;i<temp.size();i++){
        rootVec[temp[i]] = b;
    }
    
    return b;
}


int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    
    rootVec.resize(n+5);
    for(int i=0;i<n+5;i++) rootVec[i] = i;
    while(m--){
        int t,a,b;
        
        scanf("%d%d%d", &t, &a, &b);
        
        int ra = unionFind(a);
        int rb = unionFind(b);
        
        if(t == 1){
            rootVec[ra] = rb;
        }else {
            if(ra == rb){
                printf("Connect\n");
            }else{
                printf("Not Connect\n");
            }
        }
    }
    
    return 0;
}



