#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string res="";
    if(s[8]=='A' && s[0]=='1' && s[1]=='2')
    {
            s[0]='0';
            s[1]='0';           
    }
    else if(s[8]=='P' && s[0]=='1' && s[1]=='2')
    ;
    else if(s[8]=='P')
    {
        s[0]=s[0]-'0'+'1';
        s[1]=s[1]-'0'+'2';
    }
    else
        cout<<"Error";
    
    for(int i=0;i<s.length()-2;i++)
        res+=s[i];
    
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
