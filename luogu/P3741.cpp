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
    int ans = 0;
    string s;
    cin >> s;
    if(slen == 1){
        cout << ans;
        return 0;
    }


    int mark = 0;
    for(int i = 0;i < slen;i++){
        if(i == slen - 1)break;
        if(s[i] == 'V'){
            if(s[i+1] == 'K'){
                ans++;
                if(i < slen - 2){
                    i += 2;
                }
            }
            
        }
        if(s[i] == s[i+1] && mark == 0){
            mark = 1;
            ans += 1;
        }
    }

    cout << ans;

    


    
    return 0;
}