#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
#include<queue>
using namespace std;

vector<char> v;
int n;



void dsf(int f){
    if(f == n){
        for(int i = 0;i < n;i++){
            cout << v[i];
        }
        cout << endl;
        return;
    }

    v.push_back('N');
    dsf(f + 1);
    v.pop_back();

    v.push_back('Y');
    dsf(f + 1);
    v.pop_back();



}

int main(){
    cin >> n;
    dsf(0);

    


    
    return 0;
}