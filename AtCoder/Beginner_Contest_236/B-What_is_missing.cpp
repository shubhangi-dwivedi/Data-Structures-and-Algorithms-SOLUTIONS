#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int curr_sum=0;

    for(int i=0;i<4*n-1;i++){
        int x;
        cin>>x;
        curr_sum+=x;
    }

    int sum=4*((n*(n+1))/2);
    
    cout<<sum-curr_sum;
}