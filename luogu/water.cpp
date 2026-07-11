#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
  string s1;
  string s2;
  cin >> s1;
  cin >> s2;
  long long len = s1.size();
  int ans = 0;
  ll i = 0;
  ll pri1 = 0;
  ll pri2 = 0;
  while(i < len){
    if(s1[i] == '#' || s2[i] == '#'){
      if(s1[i] == '#' && s2[i] == '#'){
        if(pri1 >= pri2){
          ans = ans + i - pri1 - 1;
        }else{
          ans = ans + i - pri2 - 1;
        }
        pri1 = i;
        pri2 = i;
      }else if(s1[i] == '#' && s2[i] != '#'){
        if(pri1 >= pri2){
          ans = ans + i - pri1 - 1;
        }else{
          ans = ans + i - pri2;
        }
        pri1 = i;
      }else{
        if(pri1 >= pri2){
          ans = ans + i - pri1;
        }else{
          ans = ans + i - pri2 - 1;
        }
        pri2 = i;
      }
    }
    i++;
  }
  cout << ans;
  
  return 0;
}