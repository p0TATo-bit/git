#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;



int main(){
    int n;
    cin >> n;
    vector<int> num;
    for(int i = 0;i <= n;i++){
        int a;
        cin >> a;
        num.push_back(a);
    }
    int powe = n;
    int mark = 0;
    for(int i = 0;i <= n;i++){
        if(i != 0 && num[i] > 0 && mark == 1){
            cout << "+";
        }
        if(powe==0 && num[i] != 0){
            cout << num[i];
            powe++;
            continue;
        }
        
        if(num[i] > 1){
            mark = 1;
            cout << num[i];
            powe == 1 ? cout << "x" : cout << "x^" << powe;
        }else if(num[i] == 1){
            mark = 1;
            powe == 1 ? cout << "x" : cout << "x^" << powe;
        }else if(num[i] == 0){
            powe--;
            continue;
        }else if(num[i] == -1){
            mark = 1;
            powe == 1 ? cout << "-x" : cout << "-x^" << powe;
        }else{
            mark = 1;
            cout << num[i];
            powe == 1 ? cout << "x" : cout << "x^" << powe;
        }
        powe--;
    }
    


    
    return 0;
}