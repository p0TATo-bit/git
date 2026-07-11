#include <bits/stdc++.h>
using namespace std;

vector<string> rot90(vector<string> &squ){
    vector<string> res(squ.size(),string(squ.size(),' '));
    for(int i = 0; i < squ.size();i++){
        for(int j = 0;j < squ.size();j++){
            res[i][j] = squ[squ.size() - 1 - j][i];
        }
    }
    return res;
}

vector<string> rot180(vector<string> &squ){
    vector<string> res(squ.size(),string(squ.size(),' '));
    for(int i = 0; i < squ.size();i++){
        for(int j = 0;j < squ.size();j++){
            res[i][j] = squ[squ.size() - 1 - i][squ.size() - 1 - j];
        }
    }
    return res;
}

vector<string> rot270(vector<string> &squ){
    vector<string> res(squ.size(),string(squ.size(),' '));
    for(int i = 0;i < squ.size();i++){
        for(int j = 0;j < squ.size();j++){
            res[i][j] = squ[j][squ.size() - 1 - i];
        }
    }
    return res;
}

vector<string> reflect(vector<string> &squ){
    vector<string> res(squ.size(),string(squ.size(),' '));
    for(int i = 0; i < squ.size();i++){
        for(int j = 0;j < squ.size();j++){
            res[i][j] = squ[i][squ.size() - 1 - j];
        }
    }
    return res;
}

vector<string> combin(vector<string> &squ,int n){
    vector<string> res(squ.size(),string(squ.size(),' '));
    res = reflect(squ);
    if(n == 1)return rot90(res);
    else if(n == 2)return rot180(res);
    else return rot270(res);
}


int main(){
    int n;
    cin >> n;
    vector<string> firsqu(n);
    for(int i = 0; i < n; i++){
        string tem;
        cin >> tem;
        firsqu[i] = tem;
    }
    vector<string> endsqu(n);
    for(int i = 0; i < n;i++){
        string tem;
        cin >> tem;
        endsqu[i] = tem;
    }

        if(rot90(firsqu) == endsqu){
            cout << "1" << endl;
            return 0;
        }else if(rot180(firsqu) == endsqu){
            cout << "2" << endl;
            return 0;
        }else if(rot270(firsqu) == endsqu){
            cout << "3" << endl;
            return 0;
        }else if(reflect(firsqu) == endsqu){
            cout << "4" << endl;
            return 0;
        }else if(combin(firsqu,1) == endsqu || combin(firsqu,2) == endsqu || combin(firsqu,3) == endsqu){
            cout << "5" << endl;
            return 0;
        }else if(firsqu == endsqu){
            cout << "6" << endl;
            return 0;
        }else{
            cout << "7" << endl;
            return 0;
        }
    return 0;
}