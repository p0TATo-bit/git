#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

string cmp(string x,string y){
    if(x.length() != y.length())
        return x.length() > y.length() ? x : y;
    for(int i = 0;i < x.length();i++){
        if(x[i] != y[i])
            return x[i] > y[i] ? x : y;
    }
}

int main(){
    int n;
    cin >> n;
    vector<string> an;
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        an.push_back(s);
    }
    string ans = an[0];
    int ansi = 1;
    for(int i = 1;i < n;i++){
        if(cmp(ans,an[i]) == an[i]){
            ans = an[i];
            ansi = i + 1;
        }
    }
    cout << ansi << endl;
    cout << ans << endl;


    


    
    return 0;
}