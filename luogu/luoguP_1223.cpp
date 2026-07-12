#include<bits/stdc++.h>
using namespace std;

struct Person {
    int time;
    int idx;
};

int main(){
    int n;
    cin >> n;
    Person p[10005];
    for(int i = 0; i < n; i++){
        cin >> p[i].time;
        p[i].idx = i + 1;
    }
    sort(p, p + n, [](const Person& x, const Person& y) {
        return x.time < y.time;
    });
    double ans = 0;
    for(int i = 0; i < n; i++){
        ans += (double)p[i].time * (n - i - 1);
    }
    ans /= n;
    for(int i = 0; i < n; i++){
        cout << p[i].idx << " ";
    }
    cout << endl;
    cout << setprecision(2) << fixed << ans << endl;
}