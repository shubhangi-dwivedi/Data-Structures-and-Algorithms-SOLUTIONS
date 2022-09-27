//Even Splits
//https://www.codechef.com/submit/EVENSPLIT

#include <iostream>
#include<cstring>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    if(s=="10"){
	        cout<<"10"<<endl;
	        continue;
	    }
	    
	    int n_one=0,n_zero=0;
	    
	    for(int i=0;i<s.length();i++)
	        if(s[i]=='0')
	            n_zero++;
	        else
	            n_one++;
	            
	    string x="";
	    for(int i=0;i<n_zero;i++)
	        x+='0';
	        
	    for(int i=0;i<n_one;i++)
	        x+='1';
	    
	    cout<<x<<endl;
	}
	return 0;
}
