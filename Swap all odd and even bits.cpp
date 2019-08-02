#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	   // for(int i=0;i<32;i++)
	   // {
	   //     if(~(((n)&(1<<i))^((n)&(1<<(i+1)))))
	   //     continue;
	   //     else
	   //     {
	   //         n=n^(1<<i);
	   //         n=n^(1<<(i+1));
	   //     }
	   // }
	   int x=(n>>1)&(0X55555555);
	   int y=(n<<1)&(0XAAAAAAAA);
	    cout<<(x|y)<<"\n";
	}
	return 0;
}
