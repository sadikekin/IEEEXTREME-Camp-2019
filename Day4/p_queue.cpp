#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Creates a max heap 
    priority_queue <int, vector<int>, greater<int> > pq; 
    pq.push(5); 
    pq.push(1); 
    pq.push(10); 
    pq.push(30); 
    pq.push(20); 
  
    // One by one extract items from max heap 
    while (!pq.empty()) { 
        cout << pq.top() << " "; 
        pq.pop(); 
    } 
    
    cout << endl;
    return 0; 
}