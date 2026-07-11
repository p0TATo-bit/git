#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

void res(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}


vector<vector<int>> ressqu(vector<vector<int>> squ,int x,int y,int r,int z){
    if(z == 0){
        for(int i = x - r;i <= x + r;i++){
            for(int j = y - r;j <= y + r;j++){
                res(squ[i][j],squ[x-y+j][x+y-i]);
            }
        }
    }
    else if(z == 1){
        for(int i = x - r;i <= x + r;i++){
            for(int j = y - r;j <= y + r;j++){
                res(squ[i][j],squ[x+y-j][y-x+i]);
            }
        }
    }
    return squ;
}


int main(){
    int l;
    int n;
    cin >> l >> n;
    vector<vector<int>> squ(l+1,vector<int>(l+1));
    int full = 1;
    for(int i = 1;i <= l;i++){
        for(int j = 1; j <= l;j++){
            squ[i][j] = full++;
        }
    }
    for(int i = 1;i <= l;i++){
        for(int j = 1;j <= l;j++){
            cout << squ[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    for(int i = 0;i < n;i++){
        int x,y,r,z;
        cin >> x >> y >> r >> z;
        squ = ressqu(squ,x,y,r,z);
    }
    for(int i = 1;i <= l;i++){
        for(int j = 1;j <= l;j++){
            cout << squ[i][j] << " ";
        }
        cout << endl;
    }


    
    return 0;
}