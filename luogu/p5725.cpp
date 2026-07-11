#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;
int main(){
    int w, x, h;
    cin >> w >> x >> h;
    vector<vector<vector<int>>> s(w, vector<vector<int>>(x, vector<int>(h, 1)));
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int a, b, c, a1, b1, c1;
        cin >> a >> b >> c >> a1 >> b1 >> c1;
        // 将1-based坐标转换为0-based索引
        a--; b--; c--;
        a1--; b1--; c1--;
        // 覆盖区域（坐标已转换为0-based，无需额外处理）
        for(int j = a; j <= a1; j++){
            for(int k = b; k <= b1; k++){
                for(int l = c; l <= c1; l++){
                    s[j][k][l] = 0;
                }
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < w; i++){
        for(int j = 0; j < x; j++){
            for(int k = 0; k < h; k++){
                ans += s[i][j][k];
            }
        }
    }
    cout << ans << endl;
    return 0;
}