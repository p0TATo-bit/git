#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;



int main(){

    int m,n;
    cin >> m >> n;
    long long sqr = 0;
    long long rec = 0;
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            if(i == j){
                sqr += (m - i) * (n - j);
            }else{
                rec += (m - i) * (n - j);
            }
        }
    }
    cout << sqr << " " << rec << endl;
    


    
    return 0;
}