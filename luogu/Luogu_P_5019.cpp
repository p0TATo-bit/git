/**     Problem: P5019 铺设道路 / [NOIP2018 提高组 day1 T1]
  *     Source:  Luogu
  *     Link:    https://www.luogu.com.cn/problem/P5019
  *
  *     描述:
  *         春春是一名道路工程师，负责铺设一条长度为 n 的道路。
  *         第 i 块区域下陷深度为 d_i。每天可以选一段连续区域，
  *         将这段区域下陷深度减少 1。求最少需要多少天。
  *
  *     输入格式:
  *         第一行一个整数 n
  *         第二行 n 个整数 d_i
  *
  *     输出格式:
  *         最少天数
  *
  *     思路:
  *         贪心：从左到右，d[i] > d[i-1] 时累加差值
  *         等价于 d[0] + Σ max(0, d[i] - d[i-1])
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
    vector<int> d(n);
    for(int i = 0; i < n; i++){
        cin >> d[i];
    }
    int ans = 0;
    for(int i = 0;i < n - 1;i++){
        if(d[i + 1] > d[i]){
          ans += d[i+1] - d[i];
        }
    }
    cout << ans + d[0] << endl;
    return 0;
}
