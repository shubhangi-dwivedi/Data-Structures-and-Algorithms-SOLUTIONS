#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int b,a;
        cin>>b>>a;

        int b_count=0;

        b_count=b/2;

        cout<<min(b_count,a)<<endl;
    }
}