//https://www.codechef.com/START35D/problems/JENGA
//Jenga Night

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;

        if(x%n==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}