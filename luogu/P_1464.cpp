#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int recarr[200][200][200];

int rec(long long a,long long b,long long c){
    if(a <= 0 || b <= 0 || c <= 0){
        return 1;
    }
    if(a > 20 || b > 20 || c > 20){
        return rec(20,20,20);
    }

    if(a < b && a < c){
        if(recarr[a][b][c] != 0){
            return recarr[a][b][c];
        }
        recarr[a][b][c] = rec(a,b,c-1) + rec(a,b-1,c-1) - rec(a,b-1,c);
        return recarr[a][b][c];
    }

    if(recarr[a][b][c] != 0){
        return recarr[a][b][c];
    }

    recarr[a][b][c] = rec(a-1,b,c) + rec(a-1,b-1,c) + rec(a-1,b,c-1) - rec(a-1,b-1,c-1);
    return recarr[a][b][c];
}



int main(){
    long long a,b,c;
    while(cin >> a >> b >> c && (a != -1 || b != -1 || c != -1)){
        cout << "w(" << a << ", " << b << ", " << c << ") = " << rec(a,b,c) << endl;
    }
    

    return 0;
}