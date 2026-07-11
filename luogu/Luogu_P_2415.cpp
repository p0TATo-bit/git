#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
    int l = 0;int r = 0;
    vector<int> num;
    int a;
    while(cin >> a){
        num.push_back(a);
    }
    long long sum = 0;

    for(int i = 0;i < num.size();i++){
        sum += num[i];
    }

    sum = pow(2,num.size() - 1) * sum;

    cout << sum << endl;


    
    return 0;
}