#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> my_vector;

    for(int i=0;i<10;i++) my_vector.push_back(i);

    for(int i=0;i<my_vector.size();i++){
        cout << my_vector[i] << endl;
    }
}