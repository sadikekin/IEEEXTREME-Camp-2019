#include <iostream>
#include <vector>

int read_input(int n){
    if(n == 0) return 0;

    int m;
    scanf("%d", &m);

    if(m > 0){
        return m * m + read_input(n-1);
    }else {
        return read_input(n-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d", read_input(n));

    printf("\n");
    return 0;
}