#include<bits/stdc++.h>
using namespace std;

int main(){
    /*string s;
    string line;
    while(getline(cin,line)){
        s += line;
        if(line.find('E') != string::npos){
            break;
        }
    }
    int wincnt = 0;
    int losecnt = 0;
    int i = 0;
    while(i < s.size()){
        if(line[i] == 'W'){
            wincnt++;
        }else if(s[i] == 'L'){
            losecnt++;
        }else if(line[i] == 'E' || i == line.size() - 1){
            cout << wincnt << ":" << losecnt << endl;
            wincnt = 0;
            losecnt = 0;
        }

        if((i+1) % 11 == 0 && i != 0){
            cout << wincnt << ":" << losecnt << endl;
            wincnt = 0;
            losecnt = 0;
        }
        i++;
        
    }
    i = 0;
    wincnt = 0;
    losecnt = 0;
    cout << endl;
    while(i < line.size()){
        if(line[i] == 'W'){
            wincnt++;
        }else if(line[i] == 'L'){
            losecnt++;
        }
        if(line[i] == 'E' || i == line.size() - 1){                     
            cout << wincnt << ":" << losecnt << endl;
            wincnt = 0; 
            losecnt = 0;
        }
        if((i+1) % 21 == 0){
            cout << wincnt << ":" << losecnt << endl;
            wincnt = 0; 
            losecnt = 0;
        }
        i++;
    }*/

    string s;
    char c;
    while(cin >> c){
        if(c == 'E')break;
        s += c;
    }

    int A = 0;
    int B = 0;
    for(char i:s){  
        if(i == 'W')A++;
        if(i == 'L')B++;
        if(max(A,B) >= 11 && abs(A - B) >= 2){
            cout << A << ":" << B << endl;
            A = 0;B = 0;
        }
    }   
    cout << A << ":" << B << endl;
    A = 0;B = 0;

    cout << endl;
    for(char i:s){
        if(i == 'W')A++;
        if(i == 'L')B++;
        if(max(A,B) >= 21 && abs(A - B) >= 2){
            cout << A << ":" << B << endl;
            A = 0;B = 0;
        }
    }
    cout << A << ":" << B << endl;
    A = 0;B = 0;


    
    return 0;
}