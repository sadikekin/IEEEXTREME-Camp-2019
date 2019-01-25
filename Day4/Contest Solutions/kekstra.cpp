#include <iostream>
#include <queue>
#include <vector>
#include <climits>

using namespace std;


int main(){

    int t,n,m;

    scanf("%d",&t);

    for(int i=0; i<t; i++){

        scanf("%d %d",&n,&m);

        int a,b,l;

        vector<vector<pair<int, int>>> graph(n);

        for(int f=0; f<m; f++){

            scanf("%d %d %d",&a,&b,&l);
            a--;b--;

            graph[a].push_back(make_pair(b,l));
            graph[b].push_back(make_pair(a,l));

        }

        int start;

        scanf("%d", &start);
        start--;

        vector<int> distance(n,INT_MAX);

        distance[start] = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        pq.push(make_pair(0,start));

        while(!pq.empty()){

            int current_node = pq.top().second;
            int current_distance = pq.top().first;

            pq.pop();

            for(int i=0; i<graph[current_node].size(); i++){

                int next_node = graph[current_node][i].first;
                int distance_between = graph[current_node][i].second;
                
                if( distance_between + current_distance < distance[next_node]){
                    pq.push(make_pair(distance_between + current_distance, next_node));
                    distance[next_node] = distance_between + current_distance;
                }
            }
        }    

        for(int i=0; i<distance.size(); i++){
            if(distance[i] == INT_MAX)
                distance[i] = -1;
            if(i != start)
                cout << distance[i] << " ";
        }
        
        cout << endl;
    }


    return 0;
}