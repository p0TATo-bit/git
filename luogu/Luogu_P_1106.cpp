/**     Problem: P1106 删数问题
  *     Source:  Luogu
  *     Link:    https://www.luogu.com.cn/problem/P1106
  *
  *     描述:
  *         输入一个高精度正整数 n，去掉其中任意 k 个数字后，
  *         剩下的数字按原左右次序组成一个新的正整数。
  *         求删除 k 个数字后能得到的最小数。
  *
  *     输入格式:
  *         n (不超过 250 位)
  *         k (k < n 的长度)
  *
  *     输出格式:
  *         最小数（去除前导零）
  *
  *     思路:
  *         贪心 + 单调栈：从左到右删掉比右边大的数（删 k 次）
  *         或者：维护一个递增序列，遇到更小的数就弹出前面大的
  *         TODO
  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string n;
    cin >> n;
    int k;
    cin >> k;
    int mark = 0;
    while(k > 0){
      if(n[mark] == '0' && mark == 0 && n[mark] != n[mark + 1]){
        n.erase(mark,1);
        k--;
      }else if(n[mark] == '0'){
        mark++;
      }else if(mark == n.size() - 1){
        n.erase(mark,1);
        k--;
        break;
      }
      if(n[mark] > n[mark + 1]){
        n.erase(mark,1);
        k--;
        mark = max(mark - 1, 0);
      }else{
        mark++;
      }
    }
    for(int i = 0;i < n.size();i++){
      if(n[i] != '0'){
        cout << n[i];
      }
    }


    return 0;
}
