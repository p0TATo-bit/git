#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){


    int n;
    long long sum[19];

    cin >> n;
    sum[1] = 1;
    for(int i = 2;i <= n;i++){
        sum[i] = sum[i-1]*(4*i - 2)/(i+1);
    }
    cout << sum[n] << endl;
    


    
    return 0;
}