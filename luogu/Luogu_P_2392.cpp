#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int s1,s2,s3,s4;
vector<int> v1,v2,v3,v4;

int t = 0;
void slv(){
    
}

int main(){
    cin >> s1 >> s2 >> s3 >> s4;
    for(int i=0;i<s1;i++){
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for(int i=0;i<s2;i++){
        int x;
        cin >> x;
        v2.push_back(x);
    }
    for(int i=0;i<s3;i++){
        int x;
        cin >> x;
        v3.push_back(x);
    }
    for(int i=0;i<s4;i++){
        int x;
        cin >> x;
        v4.push_back(x);
    }
    


    
    return 0;
}