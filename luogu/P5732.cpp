#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> squ(n,vector<int>(n,0));
    for(int i = 0;i < n;i++){
        squ[i][0] = 1;
    }
    for(int i = 1;i < n;i++){
        for(int j = 1;j < n;j++){
            squ[i][j] = squ[i-1][j] + squ[i-1][j-1];
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j <= i;j++){
            if(j != 0)cout << " ";
            cout << squ[i][j];
        }
        cout << endl;
    }



    
    return 0;
}