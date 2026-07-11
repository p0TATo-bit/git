#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int n,m;
vector<int> path;

void dfs(int begin,int pos){
    if(pos > m){
        for(auto i : path){
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    for(int i = begin;i <= n;i++){
        path.push_back(i);
        dfs(i+1,pos+1);
        path.pop_back();
    }
}

int main(){
    cin >> n >> m;
    dfs(1,1);
    


    
    return 0;
}