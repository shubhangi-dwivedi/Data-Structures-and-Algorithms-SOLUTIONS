#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        if(x<=n)
            cout<<x<<endl;
        else{
            while(x>n)
                x=x-n-1;
            cout<<x<<endl;
        }
        
    }
}