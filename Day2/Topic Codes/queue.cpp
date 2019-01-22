#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> my_queue;

    for(int i=0;i<10;i++){
        my_queue.push(10-i);
    }

    while(!my_queue.empty()){
        int cur_el = my_queue.front();
        my_queue.pop();

        printf("%d ", cur_el);
    }

    printf("\n");

    return 0;
}