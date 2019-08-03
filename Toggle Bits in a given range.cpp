#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int p,q;
	    cin>>p>>q;
	    for(int i=p;i<=q;i++)
	    {
	        n=n^(1<<i-1);
	    }
	    cout<<n<<"\n";
	}
	return 0;
}
