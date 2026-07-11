#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int minsting = 1e9;
    vector<int> nums;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int star = 0;
    int end = m - 1;
    while(end < n){
        int sum = 0;
        for(int i = star;i <= end;i++){
            sum += nums[i];
        }
        end++;star++;
        minsting = min(minsting,sum);
    }
    cout << minsting << endl;

    
    return 0;
}