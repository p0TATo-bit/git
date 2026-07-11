#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> squ(n,vector<int>(n,0));
    int x = 0,y = 0;
    int data = 1;
    squ[y][x] = data++;
    while(data <= n*n){
            while(x+1 < n && squ[y][x+1] == 0){
                squ[y][x+1] = data++;
                x++;
            }
            while(y+1 < n && squ[y+1][x] == 0){
                squ[y+1][x] = data++;
                y++;
            }
            while(x-1 >= 0 && squ[y][x-1] == 0){
                squ[y][x-1] = data++;
                x--;
            }
            while(y-1 >= 0 && squ[y-1][x] == 0){
                squ[y-1][x] = data++;
                y--;
            }
        
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cout << setw(3) << squ[i][j];
        }
        cout << endl;
    }



    
    return 0;
}