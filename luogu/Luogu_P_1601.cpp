#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
    string s1;
    string s2;
    cin >> s1 >> s2;

    string s;

    int add;
    int i = s1.size() - 1,j = s2.size() - 1;
    int carry = 0;
    while(i >= 0 || j >= 0 || carry > 0){
        int sum = carry;
        if(i >= 0) sum += s1[i--] - '0';
        if(j >= 0) sum += s2[j--] - '0';
        carry = sum / 10;
        sum %= 10;
        s = to_string(sum) + s;
    }

    cout << s << endl;


    
    return 0;
}