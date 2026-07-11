#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<char>> a(n,vector<char>(m));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(a[i][j] == '?'){
                int cnt = 0;
                for(int x = -1;x <= 1;x++){
                    for(int y = -1;y <= 1;y++){
                        if(i+x >= 0 && i+x < n && j+y >= 0 && j+y < m){
                            if(a[i+x][j+y] == '*'){
                                cnt++;
                            }
                        }
                    }
                }
                a[i][j] = cnt + '0';
            }
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    


    
    return 0;
}