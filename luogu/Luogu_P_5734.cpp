#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;




int main(){
int n;
cin >> n;
string s;
cin >> s;
for(int i = 0;i < n;i++){
    int star;
    cin >> star;
    if(star == 1){
        string s2;
        cin >> s2;
        s += s2;
        cout << s << endl;
    }else if(star == 2){
        int l,r;
        cin >> l >> r;
        string temp;
        for(int j = l;j < l+r;j++){
            temp += s[j];
        }
        s = temp;
        cout << s << endl;
    }else if(star == 3){
        int l;
        cin >> l;
        string s2;
        cin >> s2;
        s.insert(l,s2);
        cout << s << endl;
    }else if(star == 4){
        string s2;
        cin >> s2;
        int ans4 = -1;
        for(int i = 0;i < s.length();i++){
            if(s[i] == s2[0]){
                for(int j = 0;j < s2.length();j++){
                    if(i + j >= s.length()){
                        break;
                    }
                    if(s[i + j] != s2[j]){
                        break;
                    }
                    if(j == s2.length() - 1){
                        ans4 = i;
                        cout << ans4 << endl;
                        break;
                    }
                }
            }
            if(ans4 != -1){
                break;
            }
        }
        if(ans4 == -1){
            cout << -1 << endl;
        }
    }
}



    
    return 0;
}