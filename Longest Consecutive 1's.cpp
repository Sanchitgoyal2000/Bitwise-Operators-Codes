#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,max=0,count=0;
	    cin>>n;
	    for(int i=0;i<32;i++)
	    {
	        if((n>>i)&1==1)
	        {
	        count++;
	        if(count>max)
	        max=count;
	        }
	        else
	        {
	            count=0;
	        }
	    }
	    cout<<max<<"\n";
	}
	return 0;
}
