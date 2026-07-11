#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

bool ispri(int a){
    if(a <= 1){
        return false;
    }
    for(int i = 2;i*i <= a;i++){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> num;
    for(int i = 0;i < n;i++){
        int a;
        cin >> a;
        if(ispri(a)){
            cout << a << " ";
        }
    }
    
    


    
    return 0;
}