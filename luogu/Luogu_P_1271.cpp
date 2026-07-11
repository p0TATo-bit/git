#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int n,m;


int main(){
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0;i < m;i++){
        int x;
        cin >> x;
        a[x-1]++;
    }
    for(int i = 0;i < n;i++){
        while(a[i]--){
            cout << i+1 << " ";
        }
    }
    


    
    return 0;
}