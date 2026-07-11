#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int ans = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i] <= 'o' && s[i] >= 'a'){
            ans += (s[i] - 'a')%3 + 1;
        }else if(s[i] <= 's' && s[i] >= 'p'){
            ans += (s[i] - 'p')%4 + 1;
        }else if(s[i] <= 'v' && s[i] >= 't'){
            ans += (s[i] - 't')%3 + 1;
        }else if(s[i] <= 'z' && s[i] >= 'w'){
            ans += (s[i] - 'w')%4 + 1;
        }else if(s[i] == ' '){
            ans++;
        }
    }
    cout << ans;

    return 0;
}