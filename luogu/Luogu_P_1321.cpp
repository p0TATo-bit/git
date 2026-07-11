#include<bits/stdc++.h>//万能头文件
using namespace std;//命名空间 
int main(){//主函数 
    string s;
    cin >> s;
    int boy = 0;
    int girl = 0;
    int len = s.size();

    for(int i = 0;i < len;i++){
        if(s[i] == 'b')boy++;
        if(s[i] == 'o' && s[i-1] != 'b')boy++;
        if(s[i] == 'y' && s[i-1] != 'o' && s[i-2] != 'b')boy++;
        if(s[i] == 'g')girl++;
        if(s[i] == 'i' && s[i-1] != 'g')girl++;
        if(s[i] == 'r' && s[i-1] != 'i' && s[i-2] != 'g')girl++;
        if(s[i] == 'l' && s[i-1] != 'r' && s[i-2] != 'i' && s[i-3] != 'g')girl++;
    }


    cout << boy << endl;
    cout << girl << endl;
	return 0;
}
