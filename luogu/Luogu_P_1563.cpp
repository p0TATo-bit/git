#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

vector<string> a;
vector<int> dir;
int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        int d;
        string s;
        cin >> d >> s;
        dir.push_back(d);
        a.push_back(s);
    }
    int ans = 0;
    for(int i = 0;i < m;i++){
        int dir2,dis;
        cin >> dir2 >> dis;
        if(dir2 != dir[ans]){
            ans = (ans + dis) % n;
        }else{
            ans = (ans - dis + n) % n;
        }
    }

    cout << a[ans] << endl;
    


    
    return 0;
}