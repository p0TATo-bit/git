#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

struct stu{
    int a,b,c;
    int sum;
    int id;
}an[305];

bool cmp(stu x,stu y){
    if(x.sum != y.sum) return x.sum > y.sum;
    else if(x.a != y.a) return x.a > y.a;
    else return x.id < y.id;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> an[i].a >> an[i].b >> an[i].c;
        an[i].sum = an[i].a + an[i].b + an[i].c;
        an[i].id = i + 1;
    }
    sort(an, an + n, cmp);
    for(int i = 0;i < 5;i++){
        cout << an[i].id << " " << an[i].sum;
        if(i != 4) cout << endl;
    }


    
    return 0;
}