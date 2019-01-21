#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main(){
    int t;

    scanf("%d", &t);
     
    while(t--){
        map<int, string> m;
        int n, q;
        scanf("%d %d", &n, &q);

        for(int a, i=0;i<n;i++){
            string s;

            cin >> a >> s;
            m[a] = s;
        }

        for(int a, i=0;i<q;i++){
            scanf("%d", &a);

            cout << (m[a] != "" ? m[a] : "-1") << endl;
        }
    }

    return 0;
}