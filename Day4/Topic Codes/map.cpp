#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, int> my_map;

    for(int i=0;i<7;i++){
        my_map["Ali"] += 1;
    }

    cout << my_map["Ali"] << endl;

    my_map.clear();

    cout << my_map["Ali"] << endl;





}