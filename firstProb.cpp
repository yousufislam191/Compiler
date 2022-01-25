#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "asfdjhaADSAFA@#$#@%@#%15454";
    ///getline(cin, str);

    ///asfdjhaADSAFA@#$#@%@#%15454
    string smlL="", capL="", vwlL="", conL="";
    string numL="", spcL="";

    for(int i=0; i<str.size(); i++){
        ///Alphabet
        if((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z')){
            ///Captital or Smaller
            if(str[i]>='A'&&str[i]<='Z'){
                capL += str[i];
            }
            else{
                smlL += str[i];
            }
            ///Vowel Or Consonant
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                vwlL += str[i];
            }
            else{
                conL += str[i];
            }
        }
        ///Number
        else if(str[i]>='0'&&str[i]<='9'){
            numL += str[i];
        }

        else
            spcL += str[i];
    }

    cout << smlL << endl;
    cout << capL << endl;
    cout << vwlL << endl;
    cout << conL << endl;
    cout << numL << endl;
    cout << spcL << endl;

    return 0;
}
