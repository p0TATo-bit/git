#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

struct stu{
    int id;
    int score;
    int quasore;
    int sum;
}a[1010];

int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i].id >> a[i].score >> a[i].quasore;
        a[i].sum = a[i].score*7 + a[i].quasore*3;
    }

    for(int i = 0;i < n;i++){
        if(a[i].sum >= 800 && a[i].score + a[i].quasore > 140){
            cout << "Excellent" << endl;
        }else{
            cout << "Not excellent" << endl;
        }
    }
    


    
    return 0;
}