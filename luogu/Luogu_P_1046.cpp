#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
#include<cmath>
#include<iomanip>

using namespace std;

void slov(){

}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    string s;
    cin >> s;
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            if(s[i] == 'A'){
                cout << min({a,b,c}) << endl;
            }else if(s[i] == 'B'){
                int middle;
                if ((a > b && a < c) || (a < b && a > c)) {
                    middle = a;
                }
                else if ((b > a && b < c) || (b < a && b > c)) {
                    middle = b;
                }
                else {
                    middle = c;
                }
                cout << middle << endl;
            }else{
                cout << max({a,b,c}) << endl;
            }
        }
    }
    return 0;
}