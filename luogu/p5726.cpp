#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

bool inrownocol(vector<vector<int>>& magsqu,int K,int N){
    int existrow = 0,existcol = 0;
    for(int i = 0;i < N;i++){
        if(magsqu[0][i] == K-1){
            existrow = 1;
        }
        if(magsqu[i][N-1] == K-1){
            existcol = 1;
        }
    }
    if(existrow == 1 && existcol == 0){
        return 1;
    }else{
        return 0;
    }
}

bool inendcolnocol(vector<vector<int>>& magsqu,int K,int N){
    int existrow = 0,existendcol = 0;
    for(int i = 0;i < N;i++){
        if(magsqu[0][i] == K-1){
            existrow = 1;
        }
        if(magsqu[i][N-1] == K-1){
            existendcol = 1;
        }
    }
    if(existendcol == 1 && existrow == 0){
        return 1;
    }else{
        return 0;
    }
    
}

bool inendrowinendcol(vector<vector<int>>& magsqu,int K,int N){
    if(magsqu[0][N-1] == K-1){
        return 1;
    }else{
        return 0;
    }
}

bool norownoendcol(vector<vector<int>>& magsqu,int K,int N){
    int existrow = 0;int existendcol = 0;
    for(int i = 0;i < N;i++){
        if(magsqu[i][0] == K-1){
            existrow = 1;
        }
        if(magsqu[N-1][i] == K-1){
            existendcol = 1;
        }
    }
    if(existrow == 0 && existendcol == 0){
        return 1;
    }else{
        return 0;
    }
    
}

int main(){
    int N;
    cin >> N;
    vector<vector<int>> magsqu(N,vector<int>(N,0));
    magsqu[0][N/2] = 1;
    int K = 2;
    int row = 0,col = N/2;
    while(K <= N*N){
        //第一个条件
        if(inrownocol(magsqu,K,N) == 1){
            magsqu[N-1][col+1] = K;
            row = N-1;
            col = col+1;
            K++;
        }
        //第二个条件
        else if(inendcolnocol(magsqu,K,N) == 1){
            magsqu[row-1][0] = K;
            row = row-1;
            col = 0;
            K++;
        }
        //第三个条件
        else if(inendrowinendcol(magsqu,K,N) == 1){
            magsqu[row][col - 1] = K;
            row = row;
            col = col - 1;
            K++;
        }
        //第四个条件
        else if(norownoendcol(magsqu,K,N) == 1){
            if(magsqu[row+1][col-1] == 0){
                magsqu[row+1][col-1] = K;
                row = row+1;
                col = col-1;
                K++;
            }else{
                magsqu[row][col+1] = K;
                row = row;
                col = col+1;
                K++;
            }
        }
    }
    for(int i = 0;i < N;i++){
        for(int j = 0;j < N;j++){
            if(j != 0)cout << " ";
            cout << magsqu[i][j];
        }
        cout << endl;
    }
    return 0;
}