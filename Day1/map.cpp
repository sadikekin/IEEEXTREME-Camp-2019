#include <iostream>
#include <map>
using namespace std;


int main() {
    map<int, int> m;

    for(int i=0;i<15;i++) m[i] = 15-i;

    printf("%d\n", m[6]);
    return 0;
}