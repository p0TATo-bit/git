#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
    vector<double> a(2),b(2),c(2);
        cin >> a[0] >> a[1];
        cin >> b[0] >> b[1];
        cin >> c[0] >> c[1];
    
    double ab = sqrt((a[0] - b[0]) * (a[0] - b[0]) + (a[1] - b[1]) * (a[1] - b[1]));
    double ac = sqrt((a[0] - c[0]) * (a[0] - c[0]) + (a[1] - c[1]) * (a[1] - c[1]));
    double bc = sqrt((b[0] - c[0]) * (b[0] - c[0]) + (b[1] - c[1]) * (b[1] - c[1]));
    cout << fixed << setprecision(2) << ab + ac + bc << endl;
    


    
    return 0;
}