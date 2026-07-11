#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int check(int x,int y,int n){
    if(x >= 0 && x < n && y >= 0 && y < n)return 1;
    return 0;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> squ(n,vector<int>(n,0));
    int a,b;
    cin >> a >> b;
    for(int i = 0;i < a;i++){
        int x,y;
        cin >> x >> y;
        x--;
        y--;
        for(int k = -1;k <= 1;k++){
            for(int j = -1;j <= 1;j++){
                if(check(x+k,y+j,n)){
                    squ[x+k][y+j] = 1;
                }
            }
            if(check(x+2,y,n))squ[x+2][y] = 1;
            if(check(x-2,y,n))squ[x-2][y] = 1;
            if(check(x,y+2,n))squ[x][y+2] = 1;
            if(check(x,y-2,n))squ[x][y-2] = 1;
        }
    }

    for(int i = 0;i < b;i++){
        int x,y;
        cin >> x >> y;
        x--;
        y--;
        for(int j = -2;j <= 2;j++){
            for(int k = -2;k <= 2;k++){
                if(check(x+j,y+k,n)){
                    squ[x+j][y+k] = 1;
                }
            }
        }
    }

    int ans = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(squ[i][j] == 0)ans++;
        }
    }
    cout << ans << endl;
    
    return 0;
}