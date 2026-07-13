/**     Problem: P1478 陶陶摘苹果（升级版）
  *     Source:  Luogu
  *     Link:    https://www.luogu.com.cn/problem/P1478
  *
  *     描述:
  *         陶陶有 s 点力气，有一把高 a 的凳子，手伸直最大高度 b。
  *         地上有 n 个苹果，每个苹果有高度 x_i 和摘它需要的力气 y_i。
  *         求最多能摘几个苹果。
  *
  *     输入格式:
  *         第一行 n, s
  *         第二行 a, b
  *         接下来 n 行：x_i, y_i
  *
  *     输出格式:
  *         最多能摘到的苹果数
  *
  *     思路:
  *         够得着的苹果按力气排序，贪心取最小的
  *         TODO
  */

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,s,a,b;
    cin >> n >> s;
    cin >> a >> b;
    vector<int> y;
    for(int i = 0; i < n; i++){
      int temp;
      int x;
      cin >> x >> temp;
      if(x <= a + b){
        y.push_back(temp);
      }
    }
    sort(y.begin(),y.end());
    int ans = 0;
    while(s >= 0 && !y.empty()){
      if(s >= y[0]){
        ans++;
      }
      s -= y[0];
      y.erase(y.begin());
    }
    
    cout << ans << endl;
    return 0;
}
