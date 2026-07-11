#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

vector<vector<int>> pardon(vector<vector<int>> a,int n){
    if(n == a.size())return a;
    int aLen = a.size();
    a[aLen - 1][aLen - 1] = 1;

    for(int i = aLen - 1;i > aLen - 1 - n;i--){
        for(int j = aLen - 1;j > aLen - 1 - n;j--){
            a[i - n][j] = a[i][j];
        }
    }

    for(int i = aLen - 1;i > aLen - 1 - n;i--){
        for(int j = aLen - 1;j > aLen - 1 - n;j--){
            a[i][j - n] = a[i][j];
        }
    }

    return pardon(a,n*2);
}

int main(){
    int n;
    cin >> n;
    long long side = pow(2,n);
    vector<vector<int>> a(side,vector<int>(side,0));
    a = pardon(a,1);
    for(int i = 0;i < side;i++){
        for(int j = 0;j < side;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}