#include <bits/stdc++.h>
using namespace std;

const int N = 5001;
int n;
int f[N][N];
int v[N][N];

int main(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= i;j++){
            cin >> v[i][j];
        }
    }

    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= i;j++){
            f[i][j] = max(f[i-1][j]+v[i][j],f[i-1][j-1]+v[i][j]);
        }
    }
    int ans = 0;
    for(int i = 1;i <= n;i++){
        ans = max(ans,f[n][i]);
    }
    cout << ans << endl;
    


    
    return 0;
}