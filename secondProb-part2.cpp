#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "18+12*5";
    int a=0, b=0, c=0, st=0;
    int pos[2], in=0;

    for(int i=0; i<str.size(); i++){
        if(str[i]=='+' ||str[i]=='-' ||str[i]=='*' ||str[i]=='/') {
            pos[in]=i;
            in++;
        }
    }
    int pos1=pos[0];
    int pos2=pos[1];

    for(int i=0; i<pos1; i++){
        a = a*10 + (str[i]-48);
    }
    for(int i=pos1+1; i<pos2; i++){
        b = b*10 + (str[i]-48);
    }
    for(int i=pos2+1; i<str.size(); i++){
        c = c*10 + (str[i]-48);
    }

    if(str[pos2]=='*' || str[pos2]=='/'){
        if(str[pos2]=='*'){
            st = b*c;

            if(str[pos1]=='+'){
                st = a+st;
            } else if(str[pos1]=='-'){
                st = a-st;
            } else if(str[pos1]=='*'){
                st = a*st;
            } else if(str[pos1]=='/'){
                st = a/st;
            }
        } else{
            st = b/c;

            if(str[pos1]=='+'){
                st = a+st;
            } else if(str[pos1]=='-'){
                st = a-st;
            } else if(str[pos1]=='*'){
                st = a*st;
            } else if(str[pos1]=='/'){
                st = a/st;
            }
        }
    }
    else if(str[pos1]=='*' || str[pos1]=='/'){
        if(str[pos1]=='*'){
            st = a*b;

            if(str[pos2]=='+'){
                st = st+c;
            } else if(str[pos2]=='-'){
                st = st-c;
            }
        } else{
            st = a/b;

            if(str[pos2]=='+'){
                st = st+c;
            } else if(str[pos2]=='-'){
                st = st-c;
            }
        }
    }
    else if(str[pos1]=='+'||str[pos1]=='-'){
        if(str[pos1]=='+'){
            st = a+b;

            if(str[pos2]=='+'){
                st = st+c;
            }else if(str[pos2]=='-'){
                st = st-c;
            }
        } else{
            st = a-b;

            if(str[pos2]=='+'){
                st = st+c;
            }else if(str[pos2]=='-'){
                st = st-c;
            }
        }
    }

    cout << st << endl;

    return 0;
}
