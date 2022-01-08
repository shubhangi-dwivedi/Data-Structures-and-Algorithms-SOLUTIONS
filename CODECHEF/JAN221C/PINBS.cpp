//Prime in a binary string 

//TRICK:
/*
Example : Look for 10 11 pattern in the string as 10=2 and 11=3
so, if the string have 10 or 11 as a substring then the substring will be prime no. and that is our solution
*/

#include<iostream>
#include<cstring>

using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int flag=0;
        long long n=s.length();

        if(n==1){
            cout<<"NO"<<endl;
            continue;
        }


        for(long long i=0;i<n-1;i++){
            if(s[i]=='1' && (s[i+1]=='0' || s[i+1]=='1')){
                flag=1;
                break;
            }
        }

        if(flag==1)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}