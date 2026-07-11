#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;


struct stu{
    string s;
    int age;
    int score;

}a[1010];

int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i].s >> a[i].age >> a[i].score;
    }

    for(int i = 0;i < n;i++){
        cout << a[i].s << " " << a[i].age + 1 << " ";
        if(a[i].score*1.2 <= 600){
            cout << a[i].score*1.2 << endl;
        }else{
            cout << "600" << endl;
        }
    }
    


    
    return 0;
}