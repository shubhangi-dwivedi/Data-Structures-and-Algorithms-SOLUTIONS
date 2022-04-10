//Dazzling AXNODR Challenge 
//https://www.codechef.com/APRIL221D/problems/AXNODR

#include<iostream>

using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){

        long long n;
        cin>>n;

        if(n%4==1)
            cout<<n<<endl;
        else if(n%4==2 || n%4==3)
            cout<<3<<endl;
        else
            cout<<n+3<<endl;
    }
}