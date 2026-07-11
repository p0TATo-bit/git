#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int prime(int n){
    if(n <= 1)return 0;
    for(int i = 2;i*i <= n;i++){
        if(n%i == 0)return 0;
    }
    return 1;
}

int main(){
    string s;
    cin >> s;
    int slen = s.length();
    int ans = 0;
    int maxn = 0;
    int minn = 1e7;
    vector<int> cnt(26,0);
    for(int i = 0;i < slen;i++){
        cnt[s[i] - 'a']++;
    }
    int cntlen = cnt.size();
    int mark = 0;
    while(mark < cntlen){
        if(cnt[mark] == 0){
            cnt.erase(cnt.begin() + mark);
            cntlen--;
        }else{
            mark++;
        }
    }


    int cnt0 = *max_element(cnt.begin(),cnt.end()) - *min_element(cnt.begin(),cnt.end());
    if(prime(cnt0)){
        cout << "Lucky Word" << endl;
        cout << cnt0 << endl;
        return 0;
    }else{
        cout << "No Answer" << endl;
        cout << 0 << endl;
    }



    
    return 0;
}