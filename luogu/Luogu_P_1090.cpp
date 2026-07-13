/**     Problem: P1090 合并果子 / [NOIP2004 提高组]
  *     Source:  Luogu
  *     Link:    https://www.luogu.com.cn/problem/P1090
  *
  *     描述:
  *         有 n 堆果子，每堆有 a_i 个。每次合并两堆，消耗体力为两堆果子数之和。
  *         求把所有果子合并成一堆的最小体力消耗。
  *
  *     输入格式:
  *         第一行一个整数 n (1 ≤ n ≤ 10000)
  *         第二行 n 个整数 a_i (1 ≤ a_i ≤ 20000)
  *
  *     输出格式:
  *         一个整数，最小体力消耗值。
  *
  *     思路:
  *         哈夫曼树 - 每次取最小的两堆合并
  *         TODO
  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long ans = 0;
    for(int i = 0;i < n-1;i++){
      ans += (a[1] + a[0]);
      a[1] += a[0]; 
      a.erase(a.begin());
      int mark = 0;
      while(a[mark] > a[mark+1] && mark < a.size()-1){
        swap(a[mark],a[mark+1]);
        mark++;
      }
    }
    cout << ans << endl;


    return 0;
}
