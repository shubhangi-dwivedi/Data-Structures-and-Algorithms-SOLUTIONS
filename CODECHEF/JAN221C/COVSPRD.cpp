#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,d;
        long long res=1;

        cin>>n>>d;

        for(int i=1;i<=d;i++){
            if(i<=10){
                res=2*res;
                if(res>n){
                    res=n;
                    break;
                }
            }

            else{
                res=3*res;
                if(res>n){
                    res=n;
                    break;
                }
            }
        }
        cout<<res<<endl;
    }
}