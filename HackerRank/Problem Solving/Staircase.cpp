#include <bits/stdc++.h>
#include <cmath>

using namespace std;

// Complete the staircase function below.
void staircase(int n) 
{
    int x=n;
    
    while(x>0)
    {
        for(int i=0;i<x-1;i++)
        {
            cout<<" ";
        }
        for(int j=n;j>=x;j--)
        {
            cout<<"#";
        }
        cout<<endl;
        x--;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
