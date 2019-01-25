#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> interval_scheduling(vector<vector<int>> &job){

    sort(job.begin(), job.end());

    vector<int> job_count;
    int max_end = 0;
    for(int i=0;i<job.size();i++){
        vector<int> current_job = job[i];
        if(current_job[1] >=  max_end){
            job_count.push_back(job[i][2]);
            max_end = current_job[0];
        }
    }

    return job_count;
}


int main(){
    vector<vector<int>> job; 

    job = {
        {9, 4, 0},
        {7, 5, 1},
        {10, 2, 2},
        {8, 5, 3},
        {15, 11, 4},
        {20, 16, 5},        
    };

    vector<int> job_count = interval_scheduling(job);

    for(int i=0;i<job_count.size();i++){
        printf("%d ", job_count[i]);
    }
    printf("\n");
}