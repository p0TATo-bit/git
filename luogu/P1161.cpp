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
    vector<int> a(2000005,0);
    for(int i = 1;i <= n;i++){
        double x;
        int b;
        cin >> x >> b;
        for(int j = 1;j <= b;j++){
            int tem = j*x;
            a[tem] = 1 - a[tem];
        }
    }
    for(int i = 1;i <= a.size();i++){
        if(a[i] == 1){
            cout << i << endl;
            break;
        }
    }

    return 0;
}