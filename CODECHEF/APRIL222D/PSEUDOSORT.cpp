#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin>>t;
    while(t--){
        int n;
        cin>>n;

        long long int a[n];
        for(long long int i=0;i<n;i++)
            cin>>a[i];

        long long int count=0;
        for(int i=0;i<n;i++){
            if(i>=1 && a[i]<a[i-1]){
                swap(a[i],a[i-1]);
                if(i>=2 && a[i-2]>a[i-1]){
                    swap(a[i-1],a[i-2]);
                    count+=2;
                }
                else
                    count++;
            }
        }
        
        if(count>1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
