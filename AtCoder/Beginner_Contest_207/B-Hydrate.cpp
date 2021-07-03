//B - Hydrate


#include<iostream>

#define li long int
using namespace std;

int main()
{
	li a,b,c,d,i=-1,x=0;
	
	cin>>a>>b>>c>>d;
	li cyan_sum=a,red_res=d*x;
	if(cyan_sum<=red_res)
		return -1;

	//if(cyan_sum>red_res)
		for( i=1;i<=INT32_MAX;i++)
		{
			cyan_sum+=b;
			red_res=c*i*d;

			if(cyan_sum<=red_res)
			{
				cout<<i;
				return 0;
			}
		}

	cout<<-1;
	return 0; 
	
}