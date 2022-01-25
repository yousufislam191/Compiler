#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "18+12";
    int num1=0, num2=0, pos;

    for(int i=0; i<str.size(); i++){
        if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/'){
            pos=i;
        }
    }

    ///char 0 == ASCII 48, int 0 == ASCII 0
    for(int i=0; i<pos; i++){
        num1 = num1*10+(str[i]-48);
    }
    for(int i=pos+1; i<str.size(); i++){
        num2 = num2*10 + (str[i]-48);
    }

    if(str[pos]=='+') cout << num1 + num2 << endl;
    else if(str[pos]=='-') cout << num1 - num2 << endl;
    else if(str[pos]=='*') cout << num1 * num2 << endl;
    else if(str[pos]=='/') cout << num1 / num2 << endl;

    return 0;
}
