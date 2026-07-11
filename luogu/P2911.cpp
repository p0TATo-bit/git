#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int main(){
    int s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    vector<int> ever(s1+s2+s3+1,0);
    for(int i = 1;i <= s1;i++){
        for(int j = 1;j <= s2;j++){
            for(int k = 1;k <= s3;k++){
                ever[i + j + k]++;
            }
        }
    }
    int ans;
    int maxn = 0;
    for(int i = 0;i < ever.size();i++){
        if(ever[i] > maxn){
            maxn = ever[i];
            ans = i;
        }
    }
    cout << ans << endl;



    
    return 0;
}