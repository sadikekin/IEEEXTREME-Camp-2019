#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

#define ll long long
using namespace std;


int main() {
    ll n, m;
    scanf("%lld %lld", &n, &m);

    if(n > m){
        printf("0\n");
        return 0;
    }

    vector<ll> arr(m);
    map<ll, ll> ma;
    for(auto &a : arr) scanf("%lld", &a);

    for(auto &a : arr) ma[a]++;

    vector<ll> el_count;
    
    for(auto el : ma) el_count.push_back(el.second);

    sort(el_count.begin(), el_count.end());
    reverse(el_count.begin(), el_count.end());

    ll l = 0, r = m;
    ll answer = 0;
    while(l <= r){
        ll i = (l + r) / 2;
        if(i == 0) i++;

        ll how_many_people = 0;
        for(auto c : el_count) how_many_people += (c / i);

        if(how_many_people >= n){
            answer = i;
            l = i + 1;
        }else {
            r = i - 1;
        }
    }

    printf("%lld\n", answer);

    return 0;
}