#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,k;
	    cin>>n>>k;
	    if(n&(1<<(k)))
	    cout<<"Yes\n";
	    else
	    cout<<"No\n";
	}
	return 0;
}
