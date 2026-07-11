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
    
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(i != j){
                if(abs(a[i].math - a[j].math) <= 5 && abs(a[i].chinese - a[j].chinese) <= 5 && abs(a[i].eng - a[j].eng) <= 5 && abs(a[i].sum - a[j].sum) <= 10){
                    cout << a[i].name << " " << a[j].name << endl;
                }
            }
        }
    }
    


    
    return 0;
}