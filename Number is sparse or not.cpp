#include <iostream>
using namespace std;
/*Given a number N, check whether it is sparse or not. A number is said to be
a sparse number if in the binary representation of the number no two or
more consecutive bits are set.*/
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int count=0,max=0;
	    for(int i=0;i<32;i++)
	    {
	        if(n&(1<<i))
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
	    if(max==1)
	    cout<<"1\n";
	    else
	    cout<<"0\n";
	}
	return 0;
}
