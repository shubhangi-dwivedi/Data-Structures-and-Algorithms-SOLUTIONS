//https://www.codechef.com/START35D/problems/DARLIG
//Dark Light

//WA
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        if(n==1 && k==0 || n==0 && k==1)
            cout<<"ON"<<endl;
        else if(n==0 && k==0)
            cout<<"OFF"<<endl;
        else if(k==0){
            if(n%4==0)
                cout<<"OFF"<<endl;
        }
        else
            cout<<"Ambiguous"<<endl;
    }
}