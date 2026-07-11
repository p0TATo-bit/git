#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int n;
vector<int> s;

void dfs(int x){
    if(x > n){
        for(int i = 0;i < n;i++){
            cout << setw(5) << s[i];
        }
        cout << endl;
        return;
    }


    for(int i = 1;i <= n;i++){
        if(find(s.begin(),s.end(),i) == s.end()){
            s.push_back(i);
            dfs(x+1);
            s.pop_back();
        }
    }
}

int main(){
    cin >> n;
    dfs(1);
    


    
    return 0;
}