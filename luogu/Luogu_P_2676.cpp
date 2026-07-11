#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

bool cmp(int x,int y){
    return x > y;
}

int main(){
    int n;
    int h;
    cin >> n >> h;
    vector<int> an;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        an.push_back(x);
    }
    sort(an.begin(), an.end(), cmp);
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(an[i] >= h){
            cout << ans+1 << endl;
            return 0;
        }else{
            ans++;
            h = h - an[i];
        }
    }
    


    
    return 0;
}