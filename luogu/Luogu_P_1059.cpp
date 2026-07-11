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
    cin >> n;
    int an[1009] = {0};
    int sum = 0;
    for(int i = 0;i < n;i++){
        int a;
        cin >> a;
        if(an[a] == 0){
            sum++;
        }
        an[a]++;
    }
    cout << sum << endl;
    for(int i = 0;i < 1009;i++){
        if(an[i] != 0){
            cout << i << " ";
        }
    }
    


    
    return 0;
}