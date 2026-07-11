#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
    int p1,p2,p3;
    cin >> p1 >> p2 >> p3;
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0;i < n;i++){
        if(s[i] != '-' || i == 0 || i == n-1){
            cout << s[i];
            continue;
        }
        if(s[i] == '-'){
            if((s[i-1] >='a' && s[i-1] <= 'z') && (s[i+1] >='a' && s[i+1] <= 'z')){
                if(s[i-1] >= s[i+1]){
                    cout << "-";
                }else
                if(s[i-1] == s[i+1]+1){
                    cout << s[i-1] << s[i+1];
                }else
                if(p3 == 1){
                    for(char j = s[i-1]+1;j < s[i+1];j++){
                        for(int k = 0;k < p2;k++){
                            if(p1 == 1){
                                cout << j;
                            }else if(p1 == 2){
                                cout << ((char)(j-'a'+'A'));
                            }else if(p1 == 3){
                                cout << "*";
                            }
                        }
                    }
                }else if(p3 == 2){
                    for(char j = s[i+1]-1;j > s[i-1];j--){
                        for(int k = 0;k < p2;k++){
                            if(p1 == 1){
                                cout << j;
                            }else if(p1 == 2){
                                cout << ((char)(j-'a'+'A'));
                            }else if(p1 == 3){
                                cout << "*";
                            }
                        }
                    }
                }
            }else if((s[i-1] >='0' && s[i-1] <= '9') && (s[i+1] >='0' && s[i+1] <= '9')){
                if(s[i-1] >= s[i+1]){
                    cout << "-";
                }else
                if(s[i-1] == s[i+1]+1){
                    cout << s[i-1] << s[i+1];
                }else
                if(p3 == 1){
                    for(char j = s[i-1]+1;j < s[i+1];j++){
                        for(int k = 0;k < p2;k++){
                            if(p1 == 3){
                                cout << "*";
                            }else{
                                cout << j;
                            }
                        }
                    }
                }else if(p3 == 2){
                    for(char j = s[i+1]-1;j > s[i-1];j--){
                        for(int k = 0;k < p2;k++){
                            if(p1 == 3){
                                cout << "*";
                            }else{
                                cout << j;
                            }
                        }
                    }
                }
            }else if((s[i-1] >='0' && s[i-1] <= '9')&&(s[i+1] >= 'a' && s[i+1] <= 'z')||(s[i+1] >= '0' && s[i+1] <= '9')||(s[i-1] >='a' && s[i-1] <= 'z')){
                cout << "-";
            }else if(s[i-1] == '-' || s[i+1] == '-'){
                cout << "-";
            }
        }
    }

    return 0;
}