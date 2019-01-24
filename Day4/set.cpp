#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> my_set;

    for(int i=0;i<10;i++) my_set.insert(i);

    if(my_set.find(9) != my_set.end()){
        cout << "It is in!" << endl;
    }

    my_set.erase(my_set.find(9));

    if(my_set.find(9) != my_set.end()){
        cout << "It is in!" << endl;
    }


    





}