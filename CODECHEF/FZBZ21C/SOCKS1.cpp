#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void comparison(vector<int> v)
{
    unordered_map <int, int> m;
    for(int i=0; i<v.size(); i++)
        m[v[i]]++;
     
    for( auto i: m)    
    {
        if(i.second>=2)
            {
                cout<<"YES";
                return;
            }
    }
    cout<<"NO";
}

int main() {
// your code goes here
    vector<int> v;
    int x;
    for(int i=0; i<3; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    
    comparison(v);
    
	return 0;
}
