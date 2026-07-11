#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;
struct stu{
    string name;
    int math;
    int chinese;
    int eng;
    int sum;
}a[1010];
int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i].name >> a[i].chinese >> a[i].math >> a[i].eng;
        a[i].sum = a[i].math + a[i].chinese + a[i].eng;
    }
    int max = a[0].sum;
    for(int i = 0;i < n;i++){
        if(a[i].sum > max){
            max = a[i].sum;
        }
    }
    for(int i = 0;i < n;i++){
        if(a[i].sum == max){
            cout << a[i].name << " " << a[i].chinese << " " << a[i].math << " " << a[i].eng << endl;
            return 0;
        }
    }
    


    
    return 0;
}