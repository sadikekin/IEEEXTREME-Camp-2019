#include <iostream>
#include <vector>

#define ll long long

using namespace std;

vector<ll> dp;

ll fib(int n){
    if(n == 1 || n == 2) return 1;

    if(dp[n] == -1)
        dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
    
}
int main() {
    int n = 50;

    dp.resize(n+5, -1);
    printf("Top-down: %lld\n", fib(n));

    ll f = 1, s = 1, i =1;

    while(i < n){
        ll temp_f = f;
        f = s;
        s = temp_f + s;
        i++;
    }

    printf("Bottom-up: %lld\n", f);


}