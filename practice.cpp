#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*string str = "18+12";
    ///getline(cin, str);
    int num1 = 0 , num2 = 0, pos;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            pos = i;
        }
    }

    for(int i=0; i<pos; i++)
    {
        num1 = num1*10 + (str[i]-48);
    }
    for(int i=pos+1; i<str.size(); i++)
    {
        num2 = num2*10 + (str[i]-48);
    }

    if(str[pos] == '+') cout << num1 + num2 << endl;
    else if(str[pos] == '-') cout << num1 - num2 << endl;
    else if(str[pos] == '*') cout << num1 * num2 << endl;
    else if(str[pos] == '/') cout << num1 / num2 << endl;*/


    /*
    string str = "18+12*5";
    int num1 = 0 , num2 = 0, num3 = 0, in = 0, st = 0, pos[2];

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            pos[in] = i;
            in++;
        }
    }
    int pos1 = pos[0];
    int pos2 = pos[1];

    for(int i=0; i<pos1; i++){
        num1 = num1*10 + (str[i]-48);
    }
    for(int i=pos1+1; i<pos2; i++){
        num2 = num2*10 + (str[i]-48);
    }
    for(int i=pos2+1; i<str.size(); i++){
        num3 = num3*10 + (str[i]-48);
    }

    if(str[pos2] == '*' || str[pos2] == '/'){
        if(str[pos2] == '*'){
            st = num2 * num3;

            if(str[pos1] == '+'){
                st = num1 + st;
            }
            else if(str[pos1] == '-'){
                st = num1 - st;
            }
            else if(str[pos1] == '/'){
                st = num1 / st;
            }
        }
        else
            {
            st = num2 / num3;

            if(str[pos1] == '+'){
                st = num1 + st;
            }
            else if(str[pos1] == '-'){
                st = num1 - st;
            }
            else if(str[pos1] == '*'){
                st = num1 * st;
            }
        }
    }
    else if(str[pos1] == '*' || str[pos1] == '/'){
        if(str[pos1] == '*'){
            st = num1 * num2;

            if(str[pos2] == '+'){
                st = st + num3;
            }
            else if(str[pos2] == '-'){
                st = st - num3;
            }
            else if(str[pos2] == '/'){
                st = st / num3;
            }
        }
        else{
            st = num1 / num2;

            if(str[pos2] == '+'){
                st = st + num3;
            }
            else if(str[pos2] == '-'){
                st = st - num3;
            }
            else if(str[pos2] == '*'){
                st = st * num3;
            }
        }
    }
    else if(str[pos1] == '+' || str[pos1] == '-'){
        if(str[pos1] == '+'){
            st = num1 + num2;

            if(str[pos2] == '+'){
                st = st + num3;
            }
            else if(str[pos2] == '-'){
                st = st - num3;
            }
        }
        else{
            st = num1 - num2;

            if(str[pos2] == '+'){
                st = st + num3;
            }
            else if(str[pos2] == '-'){
                st = st - num3;
            }
        }
    }

    cout << st << endl;
    */

    /*
    string str;
    getline(cin, str);

    string subst = "abba";
    int flag = 0;

    for(int i=0; i<str.size(); i++)
    {
        if(flag ==0 && str[i]==subst[0])
        {
            if(str[i+1]==subst[1] && str[i+2]==subst[2] &&str[i+3]==subst[3])
                flag ++;
            else
                continue;
        }
    }

    if(flag == 1) cout<< "string accepted" << endl;
    else cout<< "string denied" << endl;
    */

    map<string, string> mp;

    mp["a"] = "12";
    mp["b"] = "11";
    mp["c"] = "10";
    mp["d"] = "132";
    mp["e"] = "12123";

    for(auto it: mp){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
