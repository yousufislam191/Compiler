#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    string subStr = "baba";
    int flag=0;

    for(int i=0; i<str.size(); i++)
    {
        if(flag==0 && str[i]==subStr[0])
        {
            if(str[i+1]==subStr[1] && str[i+2]==subStr[2] && str[i+3]==subStr[3])
                flag++;
            else
                continue;
        }
    }

    if(flag==1)
        cout << "String Accepted" << endl;
    else
        cout << "String Denied" << endl;

    return 0;
}
