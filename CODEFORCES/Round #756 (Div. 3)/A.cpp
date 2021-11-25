#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    long long t;
    cin>>t;
    
    while(t--){
        
        long long n;
        cin>>n;
        
        vector< long long>v;
        while(n!=0){
            int rem;
            
            rem=n%10;
            v.push_back(rem);
            
            n/=10;
        }
        
        reverse(v.begin(),v.end());
        
        long long size=v.size();
        bool c=false;
        
        if(v[size-1]%2==0){
            cout<<0<<endl;
            continue;
        }
            
        else{
            if(v[0]%2==0){
                cout<<1<<endl;
                continue;
            }
            else{
                for(long long i=1;i<size-1;i++){
                    if(v[i]%2==0){
                        c=true;
                        break;
                    }
                }
            }
        
        if(!c)
            cout<<-1<<endl;
        else 
            cout<<2<<endl;
        }
    }
}