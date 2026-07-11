#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

vector<int> get(vector<int> ans,int x){
    string s = to_string(x);
    for(int i = 0;i < s.size();i++){
        ans[s[i] - '0']++;
    }
    return ans;
}


int main(){
    int star;
    int end;
    cin >> star >> end;
    vector<int> ans(10,0);
    for(int i = star;i <= end;i++){
        ans = get(ans,i);
    }
    for(int i = 0;i < 10;i++){
        if(i != 0){
            cout << " ";
        }
        cout << ans[i];
    }




    
    return 0;
}