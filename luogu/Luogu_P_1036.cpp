#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int n,m;
vector<int> num;
vector<int> path;

bool ispri(int x){
    if(x < 2) return false;
    for(int i = 2;i*i <= x;i++){
        if(x % i == 0) return false;
    }
    return true;
}

int ans = 0;

void dfs(int pos,int begin){
    if(begin > m){
        long long sum = 0;
        for(int i = 0;i < m;i++){
            sum += path[i];
        }
        if(ispri(sum)) ans++;
        return;
    }

    for(int i = pos;i < n;i++){
        path.push_back(num[i]);
        dfs(i+1,begin+1);
        path.pop_back();
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        int temp;
        cin >> temp;
        num.push_back(temp);
    }
    
    dfs(0,1);

    cout << ans << endl;


    
    return 0;
}