#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

string solve(){
    string ans = "";
    string str = "";
    int k;
    char ch;
    while(cin >> ch){
        if(ch == '['){
            cin >> k;
            str = solve();
            while(k--){
                ans += str;
            }
        }else if(ch == ']'){
            return ans;
        }else{
            ans += ch;
        }
    }
    return ans;
}

int main(){
    cout << solve() << endl;

    
    return 0;
}