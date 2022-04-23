//Best Coupon
//https://www.codechef.com/APRIL222D/problems/CHEAPFOOD

#include<iostream>

using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){
        int x;
        cin>>x;

        if(100 > x/10)
            cout<<100<<endl;
        else
            cout<<x/10<<endl;
    }
}