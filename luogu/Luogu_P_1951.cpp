#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    while(N--){
        int n;
        cin >> n;
        int ans = 0;
        for(int a = 0;a <= n;a++){
            for(int b = 0;b <= n;b++){
                for(int c = 0;c <= n;c++){
                    for(int d = 0;d <= n;d++){
                        if(a*d - c*b == 0)ans++;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}