#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

vector<long long> memo;
long long flb(long long x){
        if(x < 2){
            return x;
        }
        if(memo[x] != -1)return memo[x];
        memo[x] = flb(x - 1) + flb(x - 2);
        return memo[x];
}
int main(){
    long long N;
    cin >> N;
    memo.resize(N + 1,-1);
    cout << fixed << setprecision(2);
    cout << (double)flb(N);
    return 0;
}