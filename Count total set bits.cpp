#include<iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,count=0,j;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	        j=i;
	        while(j!=0)
	        {
	            j=j&(j-1);
	            count++;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
