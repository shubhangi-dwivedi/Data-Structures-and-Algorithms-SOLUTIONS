//Sasta Shark Tank
//https://www.codechef.com/APRIL222D/problems/SST

#include<iostream>

using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        if(a*10 > b*5)
            cout<<"FIRST"<<endl;
        else if (a*10 < b*5)
            cout<<"SECOND"<<endl;
        else
            cout<<"ANY"<<endl;
    }
}