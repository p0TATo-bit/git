#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;
int n,m;

string add(string a,string b){
    int carry;
    string ans = "";
    for(int i = 0;i < max(a.size(),b.size());i++){
        if(i < a.size())carry += a[a.size() - 1 - i] - '0';
        if(i < b.size())carry += b[b.size() - 1 - i] - '0';
        ans = to_string(carry % 10) + ans;
        carry /= 10;
    }
    if(carry > 0)ans = to_string(carry) + ans;
    return ans;
}

vector<string> hony(1005,"0");

string dfs(int x){
    if(hony[x] == "0"){
        return hony[x] = add(dfs(x-1),dfs(x-2));
    }
    if(hony[x] != "0"){
        return hony[x];
    }
    return dfs(x-1) + dfs(x-2);
}



int main(){

    cin >> n >> m;
    hony[0] = "1";
    hony[1] = "1";
    hony[2] = "1";

    string ans1 = dfs(n);
    string ans2 = dfs(m);
    
    cout << ans << endl;

    
    return 0;
}