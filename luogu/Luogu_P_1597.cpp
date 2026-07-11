#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int main(){
    /*string s;
    cin >> s;
    int a = 0,b = 0,c = 0;
    string ax,bx,cx;
    for(int i = 0;i < s.size();i++){
        if(i + 2 >= s.size()){
            break;
        }
        if(s[i] == 'a'){
            if(s[i + 2] == 'a'){
                ax = ax;
                i += 3;
                continue;
            }else if(s[i + 2] == 'b'){
                ax = bx;
                i += 3;
                continue;
            }else if(s[i + 2] == 'c'){
                ax = cx;
                i += 3;
                continue;
            }
            int j = 0;
            while(s[i + 2 + j++] != ';'){
                ax += s[i + 2 + j];
            }
            i += 2 + j;
        }
        if(s[i] == 'b'){
            if(s[i + 2] == 'a'){
                bx = ax;
                i += 3;
                continue;
            }else if(s[i + 2] == 'b'){
                bx = bx;
                i += 3;
                continue;
            }else if(s[i + 2] == 'c'){
                bx = cx;
                i += 3;
                continue;
            }
            int j = 0;
            while(s[i + 2 + j++] != ';'){
                bx += s[i + 2 + j];
            }
            i += 2 + j;
        }
        if(s[i] == 'c'){
            if(s[i + 2] == 'a'){
                cx = ax;
                i += 3;
                continue;
            }else if(s[i + 2] == 'b'){
                cx = bx;
                i += 3;
                continue;
            }else if(s[i + 2] == 'c'){
                cx = cx;
                i += 3;
                continue;
            }
            int j = 0;
            while(s[i + 2 + j++] != ';'){
                cx += s[i + 2 + j];
            }
            i += 2 + j;
        }
    }
    a = ax.empty() ? 0 : atoi(ax.data());
    b = bx.empty() ? 0 : atoi(bx.data());
    c = cx.empty() ? 0 : atoi(cx.data());
    cout << a << ' ' << b << ' ' << c;*/
    int a = 0,b = 0,c = 0;
    char ax,bx;
    while(scanf("%c:=%c",&ax,&bx) != EOF){
        if(bx == 'a'){
            if(ax == 'a'){
                continue;
            }else if(ax == 'b'){
                b = a;
            }else if(ax == 'c'){
                c = a;
            }
            continue;
        }else if(bx == 'b'){
            if(ax == 'a'){
                a = b;
            }else if(ax == 'b'){
                b = b;
            }else if(ax == 'c'){
                c = b;
            }
            continue;
        }else if(bx == 'c'){
            if(ax == 'a'){
                a = c;
            }else if(ax == 'b'){
                b = c;
            }else if(ax == 'c'){
                c = c;
            }
            continue;
        }

        if(ax == 'a'){
            a = bx - '0';
        }else if(ax == 'b'){
            b = bx - '0';
        }else if(ax == 'c'){
            c = bx - '0';
        }

    }

    cout << a << ' ' << b << ' ' << c;

    return 0;
}