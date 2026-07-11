#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int ans1 = 0;
int ans = 1e10000;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    vector<int> f(n);
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        f[i] = x;
    }

    

    cout << ans;


    
    return 0;
}

