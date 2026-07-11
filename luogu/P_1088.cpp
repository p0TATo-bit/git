#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int N;
int M;
vector<int> v;
vector<int> alien;
int log1 = 0;
int staralien;
void dfs(int x){
    if(x > N){
        log1++;

        if(v == alien){
            staralien = log1;
        }

        if(log1 == (staralien + M)){
            for(int i = 0;i < N;i++){
                cout << v[i] << " ";
            }
        }

        return;
    }


    for(int i = 1;i <= N;i++){
        if(find(v.begin(),v.end(),i) == v.end()){
            v.push_back(i);
            dfs(x+1);
            v.pop_back();
        }
    }

}

int main(){

    cin >> N >> M;
    for(int i = 0;i < N;i++){
        int temp;
        cin >> temp;
        alien.push_back(temp);
    }
    dfs(1);
    


    
    return 0;
}