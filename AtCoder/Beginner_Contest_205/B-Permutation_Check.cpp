//B - Permutation Check

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin>>n;

    vector <int> a;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    
    sort(a.begin(),a.end());

    for(int i=0;i<n;i++)
        if(a[i]!=i+1)
        {    
            cout<<"No";
            return 0;
        }
    
    cout<<"Yes";
    
    return 0;
}