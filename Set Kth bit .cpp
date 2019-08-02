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
	    n=n|(1<<k);
	    cout<<n<<"\n";
	}
	return 0;
}
