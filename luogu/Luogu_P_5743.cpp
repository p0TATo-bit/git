#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 1;
    for(int i = 0;i < n - 1;i++){
        ans++;
        ans *= 2;
    }
    cout << ans << endl;


    
    return 0;
}