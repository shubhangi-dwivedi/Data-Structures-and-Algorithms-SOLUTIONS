//B - Savings

#include<bits/stdc++.h>

using namespace std;

int main()
{
 	long long int n,i=1,sum=0;
  	cin>>n;
    
	do
	{
		sum+=i;
		i++;
	} while (sum<n);
	
	cout<<i-1;
  
      return 0;
}
