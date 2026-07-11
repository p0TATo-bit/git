#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int n,k;
int path = 0;
int ans = 0;

void dfs(int pos,int begin){
    if(pos == k){
        if(path == n)ans++;
        return;
    }
    for(int i = begin;i < n;i++){
        if(path + i*(k-pos) > n)return;
        path += i;
        dfs(pos+1,i);
        path -= i;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;

    dfs(0,1);

    cout << ans << endl;
    


    
    return 0;
}