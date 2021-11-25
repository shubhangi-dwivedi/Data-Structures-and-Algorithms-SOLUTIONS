#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    long long t;
    cin>>t;
    
    while(t--){
        
        long long m,n;
        cin>>m>>n;
    
            int x= min(m,n);
            int sum=m+n;
            sum=sum/4;
            if(sum<=x)
                cout<<sum<<endl;
            else
                cout<<x<<endl;
    
    }
}