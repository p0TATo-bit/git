#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

vector<char> ap = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
vector<int> a(26,0);

int main(){
    for(int i = 0;i < 4;i++){
        string s;
        getline(cin,s);
        for(int j = 0;j < s.size();j++){
            for(int k = 0;k < 26;k++){
                if(s[j] == ap[k]){
                    a[k]++;
                }
            }
        }
    }


    int maxn = *max_element(a.begin(),a.end());
    int mark = maxn;
    for(int i = 0;i < maxn;i++){
        for(int j = 0;j < 26;j++){
            if(a[j] == mark){
                cout << "* ";
                a[j]--;
            }else{
                cout << "  ";
            }
        }
        mark--;
        cout << endl;
    }
    for(int i = 0;i < 26;i++){
        cout << ap[i] << " ";
    }
    


    
    return 0;
}