///input > sum = num1 + num2
///output > id1 op1 id2 op2 id3

#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    map <string, string> mp;
    vector<string> vc;
    string mainStr;
    getline(cin, mainStr);
    string str = "";
    for(int i=0; i<mainStr.size(); i++)
    {
        if(mainStr[i]!=' ')
            str += mainStr[i];
    }
    str += '*';
    string subStr = "", opStr;
    char cntStr = '1', cntOp = '1';
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='+'||str[i]=='*'||str[i]=='-'||str[i]=='/'||str[i]=='=')
        {
            if(mp.find(subStr) == mp.end())
            {
                if(mp[subStr] == "")
                {
                    mp[subStr] = "id";
                    mp[subStr] += cntStr;
                    cntStr++;
                }
                vc.push_back(subStr);
            }
            opStr += str[i];
            if((str.size()-1)!=i)
                vc.push_back(opStr);
            if(mp[opStr] == "")
            {
                mp[opStr] = "op";
                mp[opStr] += cntOp;
                cntOp++;
            }
            subStr = "";
            opStr = "";
        }
        else
            subStr += str[i];
    }
    for(int i=0; i<vc.size(); i++)
    {
        cout << mp[vc[i]]<<" ";
    }
    return 0;
}
