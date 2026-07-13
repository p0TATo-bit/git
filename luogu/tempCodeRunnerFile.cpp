/**     Problem: P3817 小A的糖果
  *     Source:  Luogu
  *     Link:    https://www.luogu.com.cn/problem/P3817
  *
  *     描述:
  *         小A有 n 个糖果盒，第 i 盒有 a_i 颗糖果。
  *         每次可以从任意一盒吃掉一颗糖果。
  *         要求任意相邻两盒糖果数之和不超过 x。
  *         求最少吃掉的糖果数。
  *
  *     输入格式:
  *         第一行两个整数 n, x
  *         第二行 n 个整数 a_i
  *
  *     输出格式:
  *         一行一个整数，最少吃掉的糖果数。
  *
  *     思路:
  *         贪心 - 从左到右，优先减右边的盒子
  *         TODO
  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n,x;
    cin >> n >> x;
    vector<long long> a(n+1,0);
    for(int i = 0;i < n;i++){
        cin >> a[i]; 
    }
    long long ans = 0;
    for(int i = 0;i < n-1;i++){
      if(a[i] + a[i+1] > x){
        ans += a[i] + a[i+1] - x;
        a[i+1] = x - a[i];
      }
    }
    cout << ans << endl;


    return 0;
}
