#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>


using namespace std;

int main(){
    string s;
    cin >> s;
    cin.ignore();
    string line;
    getline(cin,line);
    int cnt = 0;
    int pos = -1;

//转为小写
    for(int i = 0;i < line.length();i++){
        line[i] = tolower(line[i]);
    }
    for(int i = 0;i < s.length();i++)s[i] = tolower(s[i]);

    if(line.length() < s.length()){
        cout << -1 << endl;
        return 0;
    }

//查看第一个单词
    int slen = s.length();
    int lineLen = line.length();
    if(lineLen >= slen){
        bool match = true;
        for(int i = 0;i < slen;i++){
            if(line[i] != s[i]){
                match = false;
                break;
            }
        }
        if(match && line[slen] == ' '){
            cnt++;
            pos = 0;
        }
    }

//查看往后的单词
    for(int i = 0;i < line.length();i++){
        if(line[i] == ' '){
            int start = i + 1;
            //如果超出范围最后一个单词不满足直接退出
            if(start + slen > lineLen){
                break;
            }

            //检查这个单词是否符合
            int match = 0;
            for(int j = 0;j < slen;j++){
                if(line[start + j] != s[j]){
                    match = 1;
                    break;
                }
                
            }
            if(match == 0 && (start + slen == lineLen || line[start + slen] == ' ')){
                cnt++;
                if(pos == -1){
                    pos = start;
                }
            }
        }
    }

    if(cnt != 0){
        cout << cnt << " " << pos << endl;
    }else{
        cout << -1;
    }



    
    return 0;
}