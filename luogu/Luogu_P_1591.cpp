#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

vector<string> memfac;

string add(string a,string b){
    string res = "";
    int an = a.size()-1;
    int bn = b.size()-1;
    int carry = 0;
    while(an>=0 || bn>=0|| carry > 0){
        int sum = carry;
        if(an>=0)sum += a[an--] - '0';
        if(bn>=0)sum += b[bn--] - '0';
        res = to_string(sum % 10) + res;
        carry = sum / 10;
    }
    if(carry)res = to_string(carry) + res;
    return res;
}

string mul1(string a,char b){
    string ans = "";
    int an = a.size()-1;
    int carry = 0;
    for(int i = an;i >= 0;i--){
        int sum = 0;
        sum = sum + (a[i] - '0') * (b - '0') + carry;
        ans = to_string(sum % 10) + ans;
        carry = sum / 10;
    }
    if(carry)ans = to_string(carry) + ans;
    return ans;
}

string mul(string a,string b){
    string ans = "";
    string temp;
    int an = a.size()-1;
    int bn = b.size()-1;
    int zero = 0;
    for(int i = bn;i >= 0;i--){
        temp = mul1(a,b[i]);
        for(int j = 0;j < zero;j++)temp += "0";
        ans = add(ans,temp);
        zero++;
    }
    return ans;
}

string fac(int n){
    if(memfac[n] != "")return memfac[n];
    if(n == 0)return "1";
    memfac[n] = mul(fac(n-1),to_string(n));
    return mul(fac(n-1),to_string(n));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        int a,b;
        cin >> a >> b;
        string fans = fac(a);
        int fansLen = fans.size();
        int ans = 0;
        for(int j = 0;j < fansLen;j++){
            if(fans[j] == b+'0')ans++;
        }
        cout << ans << endl;
    }
    


    
    return 0;
}