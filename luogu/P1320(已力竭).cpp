#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int main(){
    vector<string> data;
    string tem;
    cin >> tem;
    data.push_back(tem);
    int N = tem.size();
    for(int i = 1;i < N;i++){
        string tem1;
        cin >> tem1;
        data.push_back(tem1);
    }
    int pot = 0;
    vector<int> ans;
    ans.push_back(N);
    int cnt0 = 0,cnt1 = 0;
    while(pot < N*N - 1){
        if(data[pot/N][pot%N] == '0'){
            cnt0++;
            if(data[(pot+1)/N][(pot+1)%N] == '1' && pot < N*N - 1){
                ans.push_back(cnt0);
                cnt0 = 0;
            }
            pot++;

        }else if(data[pot/N][pot%N] == '1'){
            cnt1++;
            if(data[(pot+1)/N][(pot+1)%N] == '0' && pot < N*N - 1){
                ans.push_back(cnt1);
                cnt1 = 0;
            }
            pot++;
        }
    }
    if(cnt0 != 0)ans.push_back(cnt0 + 1);
    if(cnt1 != 0)ans.push_back(cnt1 + 1);
    if(data[N-1][N-1] != data[N-1][N-2])ans.push_back(1);
    for(int i = 0;i < ans.size();i++){
        if(i != 0)cout << " ";
        cout << ans[i];
    }



    
    return 0;
}