#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    vector<int> exist;
    int cnt = 0;
    for(int i = 0;i < nums.size();i++){
        for(int j = 0;j < nums.size();j++){
            if(i != j){
                int sum = nums[i] + nums[j];
                for(int k = 0;k < nums.size();k++){
                    if(k == i || k == j)continue;
                    if(sum == nums[k]){
                        if(find(exist.begin(),exist.end(),k) == exist.end()){
                            exist.push_back(k);
                            cnt++;
                        }
                    }
                }
            }else{
                continue;
            }

        }
    }
    cout << cnt << endl;


    
    return 0;
}