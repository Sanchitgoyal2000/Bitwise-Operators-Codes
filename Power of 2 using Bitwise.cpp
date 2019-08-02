#include <iostream>
using namespace std;

int main()
{
	unsigned long long int  t;
	cin>>t;
	while(t-->0)
	{
	    unsigned long long int a;
	    cin>>a;
	    if(a==0)
	    {
	       cout<<"NO\n";
	       continue;
	    }
	    if(((a)&(a-1))==0)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
