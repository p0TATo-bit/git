#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int strToInt(string s){
    int len = s.length();
    int ans = 0;
    for(int i = 0;i < len;i++){
        ans = ans*10 + s[i] - '0';
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    char mem;
    for(int i = 0;i < n;i++){
        string a,b,c;
        cin >> a;
        if(a[0] == 'a' || a[0] == 'b' || a[0] == 'c'){
            cin >> b >> c;
        }else{
            cin >> b;
        }

        if(a[0] == 'a' || a[0] == 'b' || a[0] == 'c'){
            if(a[0] == 'a'){
                cout << b << "+" << c << "=" << strToInt(b) + strToInt(c) << endl;
                cout << b.length() + c.length() + to_string(strToInt(b) + strToInt(c)).length() + 2 << endl;
            }else if(a[0] == 'b'){
                cout << b << "-" << c << "=" << strToInt(b) - strToInt(c) << endl;
                cout << b.length() + c.length() + to_string(strToInt(b) - strToInt(c)).length() + 2 << endl;
            }else if(a[0] == 'c'){
                cout << b << "*" << c << "=" << strToInt(b) * strToInt(c) << endl;
                cout << b.length() + c.length() + to_string(strToInt(b) * strToInt(c)).length() + 2 << endl;
            }
            mem = a[0];
        }else{
            if(mem == 'a'){
                cout << a << "+" << b << "=" << strToInt(a) + strToInt(b) << endl;
                cout << a.length() + b.length() + to_string(strToInt(a) + strToInt(b)).length() + 2 << endl;
            }else if(mem == 'b'){
                cout << a << "-" << b << "=" << strToInt(a) - strToInt(b) << endl;
                cout << a.length() + b.length() + to_string(strToInt(a) - strToInt(b)).length() + 2 << endl;
            }else if(mem == 'c'){
                cout << a << "*" << b << "=" << strToInt(a) * strToInt(b) << endl;
                cout << a.length() + b.length() + to_string(strToInt(a) * strToInt(b)).length() + 2 << endl;
            }
        }
    }



    
    return 0;
}