#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,countone=0;
	    cin>>n;
	    while(n!=0)
        {
          if(n&1)
          countone++;
          n=n>>1;
        }
     cout<<countone<<"\n";
	}
	return 0;
}
