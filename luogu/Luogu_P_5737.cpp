#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

bool isLeap(int year){
    if(year % 4 == 0 && year % 100 != 0)return 1;
    if(year % 400 == 0)return 1;
    return 0;
}


int main(){
    int x,y;
    cin >> x >> y;
    vector<int> ans;
    int cnt = 0;
    for(int i = x;i <= y;i++){
        if(isLeap(i)){
            ans.push_back(i);
            cnt++;
        }
    }
    cout << cnt << endl;
    for(int i = 0;i < ans.size();i++){
        if(i != 0)cout << " ";
        cout << ans[i];
    }
    return 0;
}