#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int main(){
    int slen;
    cin >> slen;
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0;i < slen;i++){
        if(i == slen - 1)break;
        if(s[i] == 'V' && s[i+1] == 'K'){
            ans++;
            s[i] = 'X';
            s[i+1] = 'X';
        }
    }

    for(int i = 0;i < slen;i++){
        if((s[i] == s[i+1]) && (s[i] != 'X') ){
            ans++;
            s[i] = 'X';
            s[i+1] = 'X';
            break;
        }
    }

    cout << ans;


    
    return 0;
}