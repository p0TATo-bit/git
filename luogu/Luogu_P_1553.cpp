#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

string res(string s){
    if(s == "0"){
        return "0";
    }

    if(s == "-0"){
        return "-0";
    }

    int i = 0;
    if(s[0] == '-')i = 1;
    int sLen = s.size();
    string ans;

    if(i == 1)ans += '-';

    for(int j = sLen - 1;j >= i;j--){
        ans += s[j];
    }

    for(;i < sLen;i++){
        if(ans[i] != '0')break;
        if(ans[i] == '0'){
            ans.erase(ans.begin());
            i--;
        }
    }

    return ans;
}

string subres(string s){
    if(s == "0"){
        return "0";
    }
    
    int sLen = s.size();

    for(int i = 0;i < sLen;i++){
        if(s[i] != '0')break;
        if(s[i] == '0'){
            s.erase(s.begin());
            i--;
        }
    }

    string ans;
    for(int i = s.size()-1;i >= 0;i--){
        ans += s[i];
    }

    return ans;
}


int main(){
    string s;
    cin >> s;
    if(s == "0"){
        cout << "0" << endl;
        return 0;
    }

    string ans;
    int sLen = s.size();
    for(int i = 0;i < sLen;i++){
        if(s[i] == '.'){
            ans = ans + res(s.substr(0,i)) + "." + subres(s.substr(i+1,sLen-1));
            cout << ans << endl;
            return 0;
        }
        if(s[i] == '/'){
            ans = ans + res(s.substr(0,i)) + "/" + res(s.substr(i+1,sLen-1));
            cout << ans << endl;
            return 0;
        }
        if(s[i] == '%'){
            ans = ans + res(s.substr(0,i)) + "%";
            cout << ans << endl;
            return 0;
        }
    }
    cout << res(s);
    return 0;
}