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
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int h=0;
	    for(int i=0;i<n;i++)
	    {
	        h=h^a[i];
	    }
	    cout<<h<<"\n";
	}
	return 0;
}
