#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

vector<char> st = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
vector<int> stNum = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};



int main(){

    string s;
    cin >> s;
    long long sNum = 1;
    for(int i = 0;i < s.size();i++){
        for(int j = 0;j < 26;j++){
            if(st[j] == s[i]){
                sNum *= stNum[j];
            }
        }
    }
    string s2;
    cin >> s2;
    long long sNum2 = 1;
    for(int i = 0;i < s2.size();i++){
        for(int j = 0;j < 26;j++){
            if(st[j] == s2[i]){
                sNum2 *= stNum[j];
            }
        }
    }

    if(sNum%47 == sNum2%47){
        cout << "GO";
    }else{
        cout << "STAY";
    }


    
    return 0;
}