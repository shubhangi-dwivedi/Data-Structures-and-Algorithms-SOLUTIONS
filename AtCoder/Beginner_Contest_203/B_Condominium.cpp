//B - AtCoder Condominium

#include<iostream>
 
using namespace std;
 
int main()
{
	int n,k;
  	cin>>n>>k;
  	int sum,res=0;
  	
  for(int i=1;i<=n;i++)
  {
      sum=0;
    for(int j=1;j<=k;j++)
    {
        sum=100*i+j;
        res+=sum;
    }
  }
  cout<<res;
      
  return 0;
}