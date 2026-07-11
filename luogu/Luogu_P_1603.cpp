#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

vector<string> st = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","a","both","another","first","second","third"};
vector<int> stNum = {0,1,4,9,16,25,36,49,64,81,0,21,44,69,96,25,56,89,24,61,0,1,4,1,1,4,9};


int main(){

    vector<int> num;

    string s;
    for(int i = 0;i < 6;i++){
        cin >> s;
        for(int j = 0;j < 27;j++){
            if(st[j] == s){
                num.push_back(stNum[j]);
            }
        }
    }

    sort(num.begin(),num.end());

    long long ans = 0;

    for(int i = 0;i < num.size();i++){
        ans = ans * 100 + num[i];
    }

    cout << ans;


    
    return 0;
}