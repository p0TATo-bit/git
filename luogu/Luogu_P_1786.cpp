#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

struct node{
    string na,zw,xzw;
    long long bg;
    int le,h;
}ab[115];

int change(string a){
    if(a == "BangZhu")return 1;
    else if(a == "FuBangZhu")return 2;
    else if(a == "HuFa")return 3;
    else if(a == "ZhangLao")return 4;
    else if(a == "TangZhu")return 5;
    else if(a == "JingYing")return 6;
    else return 7;
}

int cmp1(node x,node y){
    if(x.bg==y.bg) return x.h<y.h;
    else return x.bg>y.bg;
}

int cmp2(node x,node y){
    if(change(x.xzw) == change(y.xzw)){
        if(x.le == y.le)return x.h<y.h;
        else return x.le>y.le;
    }
    return change(x.xzw) < change(y.xzw);  
}


int main(){
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> ab[i].na >> ab[i].zw >> ab[i].bg >> ab[i].le;
        ab[i].h = i;
    }
    sort(ab+4,ab+1+n,cmp1);
    for(int i = 1;i <= n;i++){
        if(i==1)ab[i].xzw="BangZhu";
        else if (i==2||i==3)ab[i].xzw="FuBangZhu";
        else if (i==4||i==5)ab[i].xzw="HuFa";
        else if (i>=6&&i<=9)ab[i].xzw="ZhangLao";
        else if (i>=10&&i<=16)ab[i].xzw="TangZhu";
        else if (i>=17&&i<=41)ab[i].xzw="JingYing";
        else ab[i].xzw="BangZhong";
    }
    sort(ab+4,ab+1+n,cmp2);
    for(int i = 1;i <= n;i++){
        cout << ab[i].na << " " << ab[i].xzw << " " << ab[i].le << endl;
    }


    
    return 0;
}