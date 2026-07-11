#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

bool ispri(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2;i*i <= n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    for(int i = 4;i <= n;i++){
        if(i % 2 != 0)continue;
        for(int j = 2;j <= i;j++){
            if(ispri(j) && ispri(i - j)){
                cout << i << "=" << j << "+" << i - j << endl;
                break;
            }
        }
    }
    


    
    return 0;
}