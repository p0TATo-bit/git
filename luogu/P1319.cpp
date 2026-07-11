#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int main(){
    vector<int> data;
    int tem;
    while(cin >> tem){
        data.push_back(tem);
        if(cin.peek() == '\n')break;
    }
    int N = data[0];
    int pot = 1;
    int c = 0;
    while(pot < data.size()){
            for(int k = 0;k < data[pot];k++){
                cout << 0;
                c++;
                if(c % N == 0)cout << endl;
            }
            pot++;
            for(int k = 0;k < data[pot];k++){
                cout << 1;
                c++;
                if(c % N == 0)cout << endl;
            }
            pot++;
        
    }



    
    return 0;
}