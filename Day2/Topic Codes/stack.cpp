#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> my_stack;

    for(int i=0;i<10;i++) my_stack.push(15-i);

    while(!my_stack.empty()){
        int my_el = my_stack.top();
        my_stack.pop();

        printf("%d ", my_el);

    }

    printf("\n");

}