#include <iostream>
using namespace std;
#include<math.h>
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    unsigned long long int n,i=0,count=0,count1=0;
	    cin>>n;
	  while(n!=0)
	    {
	        if((n)&(1))
	        {
	            count1++;
	            if(i%3==0)
	            {
	            count++;
	            }
	        }
	        n=n>>1;
	        i++;       //positions at 3 are power of 8 in power of 2 table
	    }
	    if(count==1&&count1==1)
	    cout<<"Yes\n";
	    else
	    cout<<"No\n";
	}
	return 0;
}
