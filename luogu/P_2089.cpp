#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int n;

vector<int> arr;
int cnt = 0;
vector<vector<int>> ans;

void solve(int n,int pos){
    int res = 10 - pos;
    if(res == 0){
        if(n == 0){
            cnt++;
            ans.push_back(arr);
        }
        return;
    }

    if(n < res || n > res*3){
        return;
    }
    
    for(int i = 1;i <= 3;i++){
        arr.push_back(i);
        solve(n - i,pos + 1);
        arr.pop_back();
    }
}

int main(){
    cin >> n;
    solve(n,0);
    cout << cnt << endl;
    for(int i = 0;i < cnt;i++){
        for(int j = 0;j < ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        if(i != cnt - 1)cout << endl;
    }
    
    return 0;
}