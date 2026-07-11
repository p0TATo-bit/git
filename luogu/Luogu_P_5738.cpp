#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    float ans;
    for(int i = 0;i < m;i++){
        double sum = 0;
        double maxn = -1;
        double minn = 100;
        for(int j = 0;j < n;j++){
            double a;
            cin >> a;
            sum += a;
            maxn = max(maxn,a);
            minn = min(minn,a);
        }
        float avg = (sum - maxn - minn) / (n - 2);
        ans = max(ans,avg);
        
    }

    cout << fixed << setprecision(2) << ans << endl;
    


    
    return 0;
}