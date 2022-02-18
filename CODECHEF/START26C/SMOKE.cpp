#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x,y;
        cin>>n>>x>>y;

        int ans=INT_MAX;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                int k=100*j+i*4;
                if(k>=n){
                    ans=min(ans,i*y+j*x);
                }
            }
        }
        cout<<ans<<endl;
    }
}