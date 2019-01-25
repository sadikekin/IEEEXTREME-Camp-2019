#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> job_sequencing(vector<vector<int>> &job){
    sort(job.begin(), job.end());
    reverse(job.begin(), job.end());

    vector<int> job_count;

    int max_deadline = 0;
    for(auto j : job) max_deadline = max(max_deadline, j[1]);
    
    vector<bool> job_schedule(max_deadline+5, false);

    for(int i=0;i<job.size();i++){
        vector<int> current_job = job[i];

        int j = i;
        while(job_schedule[job[j][1]]){
            j--;
            if(j == -1) break;
        } 
        
        if(j != -1) {
            job_schedule[job[j][1]] = true;
            job_count.push_back(current_job[2]);
        }
    
    }
    return job_count;
}


int main(){
    vector<vector<int>> job; 

    job = {
        {100, 4, 0},
        {101, 3, 1},
        {500, 1, 2},
        {50, 3, 3},
        {15, 2, 4},
        {20, 2, 5},        
    };

    vector<int> job_count = job_sequencing(job);

    for(int i=0;i<job_count.size();i++){
        printf("%d ", job_count[i]);
    }
    printf("\n");
}