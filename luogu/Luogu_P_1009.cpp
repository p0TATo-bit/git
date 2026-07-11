#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;


string add(string s1,string s2){
    string s;
    int i = s1.size() - 1;
    int j = s2.size() - 1;
    int carry = 0;
    while(i >= 0 || j >= 0 || carry > 0){
        int sum = carry;
        if(i >= 0 && j >= 0)sum = (s1[i--] - '0') + (s2[j--] - '0') + sum;
        else if(i >= 0 && j < 0)sum += s1[i--] - '0';
        else if(i < 0 && j >= 0)sum += s2[j--] - '0';
        carry = sum / 10;
        sum %= 10;
        s = to_string(sum) + s;
    }
    if(carry > 0)
        s = to_string(carry) + s;
    return s;
}

string mul0(string s1,char s2){
    string s;
    int i = s1.size() - 1;
    int carry = 0;
    while(i >= 0){
        int sum = carry;
        sum += (s1[i--] - '0') * (s2 - '0');
        carry = sum / 10;
        sum %= 10;
        s = to_string(sum) + s;
    
    }
    if(carry > 0)
        s = to_string(carry) + s;

    return s;
}

string mul(string s1,string s2){
    if(s1 == "0" || s2 == "0")
        return "0";
    string s;
    int i = s2.size() - 1;
    while(i >= 0){
        string t = mul0(s1,s2[i]);
        int temi = i;
        while(s2.size() - temi++ - 1 > 0)t += '0';
        s = add(s,t);
        i--;
    }
    return s;

}

string fac(string s){
    if(s == "0")
        return "1";
    return mul(s,fac(to_string(stoi(s) - 1)));
}

string S(string n){
    string s;
    if(n == "1")
        return "1";
    return add(fac(n),S(to_string(stoi(n) - 1)));
}

int main(){
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << S(s1) << endl;
    
    return 0;
}