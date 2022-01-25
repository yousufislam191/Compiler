#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    map<string, string> mp;

    mp["a"] = "65";
    mp["b"] = "66";
    mp["c"] = "67";
    mp["d"] = "68";
    mp["e"] = "69";

    for(auto it: mp){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
