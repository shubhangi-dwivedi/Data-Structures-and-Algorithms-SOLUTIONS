//https://www.codechef.com/START35D/problems/DARLIG
//Dark Light

#include<iostream>

using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        if(k==1){
            if(n%4==0)
                cout<<"ON"<<endl;
            else
                cout<<"Ambiguous"<<endl;
        }
        else if(k==0){
            if(n%4==0)
                cout<<"OFF"<<endl;
            else
                cout<<"ON"<<endl;
        }
        
    }
}