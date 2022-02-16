#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n;
        cin>>x;
        int a[n+1];
        a[0]=x;

        for(int i=1;i<=n;i++)
            cin>>a[i];

        int max_peep=INT_MIN;
        int sum=0;
        for(int i=0;i<=n;i++){
            sum+=a[i];
            if(sum>max_peep)
                max_peep=sum;
        }

        cout<<max_peep<<endl;
    }
    return 0;
}