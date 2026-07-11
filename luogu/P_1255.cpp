#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int n;

vector<string> dp(10001,"0");

string add(string a, string b){
    int carry = 0;
    string c = "";
    for(int i = 0;i < max(a.size(),b.size());i++){
        int x = carry;
        if(i < a.size())x += a[a.size() - 1 - i] - '0';
        if(i < b.size())x += b[b.size() - 1 - i] - '0';
        c = to_string(x % 10) + c;
        carry = x / 10;
    }
    if(carry > 0){
        c = to_string(carry) + c;
    }
    return c;
}

string dfs(int x){
    if(dp[x] != "0")return dp[x];
    return dp[x] = add(dfs(x-1), dfs(x-2));
}

int main(){
    dp[0] = "1";
    dp[1] = "1";

    cin >> n;
    string ans = dfs(n);

    cout << ans << endl;


    
    return 0;
}