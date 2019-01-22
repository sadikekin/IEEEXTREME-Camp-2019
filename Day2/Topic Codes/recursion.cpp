#include <iostream>
#include <stack>

using namespace std;

int my_rec_function(int a){
    printf("%d ", a);
    if(a == 0){
        return 0;
    }else{
        return my_rec_function(a-1);
    }
}

int main(){
    my_rec_function(10);
    return 0;
}