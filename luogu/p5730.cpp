#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> num0 = {{"XXX"},{"X.X"},{"X.X"},{"X.X"},{"XXX"}};
    vector<string> num1 = {{"..X"},{"..X"},{"..X"},{"..X"},{"..X"}};
    vector<string> num2 = {{"XXX"},{"..X"},{"XXX"},{"X.."},{"XXX"}};
    vector<string> num3 = {{"XXX"},{"..X"},{"XXX"},{"..X"},{"XXX"}};
    vector<string> num4 = {{"X.X"},{"X.X"},{"XXX"},{"..X"},{"..X"}};
    vector<string> num5 = {{"XXX"},{"X.."},{"XXX"},{"..X"},{"XXX"}};
    vector<string> num6 = {{"XXX"},{"X.."},{"XXX"},{"X.X"},{"XXX"}};
    vector<string> num7 = {{"XXX"},{"..X"},{"..X"},{"..X"},{"..X"}};
    vector<string> num8 = {{"XXX"},{"X.X"},{"XXX"},{"X.X"},{"XXX"}};
    vector<string> num9 = {{"XXX"},{"X.X"},{"XXX"},{"..X"},{"XXX"}};
    int n;
    cin >> n;
    vector<int> display(n);
    string num;
    cin >> num;
    for(int i = 0;i < n;i++){
        display[i] = num[i] - '0';
    }
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < n;j++){
            
                if(display[j] == 0){
                    cout << num0[i];
                    if(j != n-1){
                        cout << ".";
                    }
                }else if(display[j] == 1){
                    cout << num1[i];
                    if(j != n-1){
                        cout << ".";
                    }
                }else if(display[j] == 2){
                    cout << num2[i];
                    if(j != n-1){
                        cout << ".";
                    }
                }else if(display[j] == 3){
                    cout << num3[i];
                    if(j != n-1){
                        cout << ".";
                    }
                }else if(display[j] == 4){
                    cout << num4[i];
                    if(j != n-1){
                        cout << ".";
                    }
                }else if(display[j] == 5){
                    cout << num5[i];
                    if(j != n-1){
                        cout << ".";
                    }
                }else if(display[j] == 6){
                    cout << num6[i];
                    if(j != n-1){
                        cout << ".";
                    }
                }else if(display[j] == 7){
                    cout << num7[i];
                    if(j != n-1){
                        cout << ".";
                    }
                }else if(display[j] == 8){
                    cout << num8[i];
                    if(j != n-1){
                        cout << ".";
                    }
                }else if(display[j] == 9){
                    cout << num9[i];
                    if(j != n-1){
                        cout << ".";
                    }
                }
            
        }
        cout << endl;
    }
}