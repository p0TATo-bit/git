/**     Problem: P1803 凌乱的yyy / 线段覆盖
  *     Source:  Luogu
  *     Link:    https://www.luogu.com.cn/problem/P1803
  *
  *     描述:
  *         现在有 n 个比赛，每个比赛有开始时间 a_i 和结束时间 b_i。
  *         yyy 参加完一场比赛之后必须等到比赛结束才能参加下一场。
  *         问她最多能参加多少场比赛。
  *
  *     输入格式:
  *         第一行一个整数 n
  *         接下来 n 行，每行两个整数 a_i, b_i
  *
  *     输出格式:
  *         一行一个整数
  *     思路:
  *         TODO
  */

#include <bits/stdc++.h>
using namespace std;

struct line{
    int l,r;
}a[100005];

bool cmp(line x,line y){
    return x.r < y.r;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i].l >> a[i].r;
    }
    sort(a,a+n,cmp);
    int ans = 1;
    int mark = 0;
    for(int i = 0;i < n - 1;i++){
        if(a[mark].r > a[i].l){
            ans += 0;
        }else{
            ans++;
            mark = i + 1;
        }
    }
    cout << ans << endl;

    return 0;
}
