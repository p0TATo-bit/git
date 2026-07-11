#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int n;

bool check(vector<int> arr){
    for(int i = 1;i <= 9;i++){
        if(arr[i] != 1){
            return false;
        }
    }
    return true;
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    bool flag = false;
    for(int i = 0;i <= 1000/c;i++){
        vector<int> arr(10,0);
        int a1 = i*a;int tempa = a1;
        int b1 = i*b;int tempb = b1;
        int c1 = i*c;int tempc = c1;

        for(int j = 0;j < 3;j++){
            arr[a1%10]++;
            arr[b1%10]++;
            arr[c1%10]++;
            a1 /= 10;
            b1 /= 10;
            c1 /= 10;
        }
        if(check(arr)){
            cout << tempa << " " << tempb << " " << tempc << endl;
            flag = true;
        }
    }
    if(!flag){
        cout << "No!!!" << endl;
    }

    return 0;
}