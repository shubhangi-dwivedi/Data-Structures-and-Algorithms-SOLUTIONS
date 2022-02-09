#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        int x[n],y[n];
        for(int i=0;i<n;i++)
            cin>>x[i]>>y[i];
        
        sort(x,x+n);
        sort(y,y+n);

        int x_count=0;
        for(int i=0;i<n;i++){
            while(i<n-1 && x[i]==x[i+1])
                i++;
            x_count++;
        }

        int y_count=0;
        for(int i=0;i<n;i++){
            while(i<n-1 && y[i]==y[i+1])
                i++;
            y_count++;
        }

        cout<<x_count+y_count<<endl;
    }
}