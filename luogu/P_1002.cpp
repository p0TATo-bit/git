#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

#define ll long long

int a,b,c,d;
int path = 0;

ll chess[35][35];


int main(){

    for(int i = 0; i <= 30;i++){
        for(int j = 0; j <= 30;j++){
            chess[i][j] = 0;
        }
    }

    scanf("%d %d %d %d",&a,&b,&c,&d);
    c++;d++;
    chess[c][d] = -1;
    chess[c+1][d+2] = -1;
    chess[c+2][d+1] = -1;
    chess[c+2][d-1] = -1;
    if(d-2 > 0) chess[c-1][d-2] = -1;
    if(d-2 > 0) chess[c+1][d-2] = -1;
    if(c-2 > 0) chess[c-2][d-1] = -1;
    if(c-2 > 0) chess[c-2][d+1] = -1;
    chess[c-1][d+2] = -1;
    chess[1][1] = 1;

    for(int i = 1; i <= a + 1;i++){
        for(int j = 1; j <= b + 1;j++){
            if(i == 1 && j == 1) continue;
            if(chess[i][j] == -1) continue;
            if(chess[i-1][j] != -1 && chess[i][j-1] != -1){
                chess[i][j] = chess[i-1][j] + chess[i][j-1];
            }else if(chess[i-1][j] == -1 && chess[i][j-1] != -1){
                chess[i][j] = chess[i][j-1];
            }else if(chess[i-1][j] != -1 && chess[i][j-1] == -1){
                chess[i][j] = chess[i-1][j];
            }
        }
    }

    cout << chess[a+1][b+1] << endl;

    


    
    return 0;
}