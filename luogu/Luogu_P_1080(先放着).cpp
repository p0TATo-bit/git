#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

bool com(string s1,string s2){
    if(s1.size() > s2.size())
        return true;
    else if(s1.size() < s2.size())
        return false;
    int i = s1.size() - 1;
    int j = s2.size() - 1;
    while(i >= 0 && j >= 0){
        if(s1[i] > s2[j])
            return true;
        else if(s1[i] < s2[j])
            return false;
        i--;
        j--;
    }
    return false;
}


string sub(string s1,string s2){
    string s;
    int i = s1.size() - 1;
    int j = s2.size() - 1;
    int carry = 0;
    while(i >= 0 || j >= 0 || carry < 0){
        int sum = carry;
        if(i >= 0 && j >= 0)sum = (s1[i--] - '0') - (s2[j--] - '0') + sum;
        else if(i >= 0 && j < 0)sum = s1[i--] - '0' + sum;
        else if(i < 0 && j >= 0)sum = s2[j--] - '0' + sum;
        carry = sum / 10;
        sum %= 10;
        s = to_string(sum) + s;
    }
    if(carry < 0)
        s = to_string(carry) + s;
    return s;

}


string div(string s1,string s2){
    string s;
    string ans;
    string temp;
    int carry = 0;
    int i = 0;
    while(i < s1.size()){
        temp += s1[i];
        int cnt = 0;
        while(com(temp,s2)){
            temp = sub(temp,s2);
            cnt++;
        }
        ans += to_string(cnt);
        i++;
    }
    for(int i = 0;i < ans.size();i++){
        if(ans[i] != '0'){
            ans = ans.substr(i);
            break;
        }
    }
    if(ans == "")
        ans = "0";
    return ans;
}

string add(string s1,string s2){
    string s;
    int i = s1.size() - 1;
    int j = s2.size() - 1;
    int carry;
    while(i >= 0 || j >= 0 || carry > 0){
        int sum = carry;
        if(i >= 0 && j >= 0)sum = (s1[i] - '0') + (s2[j] - '0') + sum;
        else if(i >= 0)sum = s1[i] - '0' + sum;
        else if(j >= 0)sum = s2[j] - '0' + sum;
        carry = sum/10;
        s = to_string(sum%10) + s;
    }

    return s;

}
int main(){
    /*int n;
    vector<vector<string>> per(n+1);
    for(int i = 0;i <= n;i++){
        cin >> per[i][0] >> per[i][1];
    }*/
    string s1 = "12345";
    string s2 = "123";
    cout << div(s1,s2) << endl;


    
    return 0;
}