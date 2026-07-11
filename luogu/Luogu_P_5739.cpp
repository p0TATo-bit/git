#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

long long ji(int n){
    if(n == 1)return 1;
    return n*ji(n-1);
}


int main(){
    int n;
    cin >> n;
    cout << ji(n) << endl;


    
    return 0;
}