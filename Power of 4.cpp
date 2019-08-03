int isPowerOfFour(unsigned int n)
{
	    unsigned long long int count=0,count1=0;
	    //int p=(int)log2(n)+1;
	    for(int i=0;i<32;i++)
	    {
	        if((n)&(1<<i))
	        {
	            count1++;
	            if(i%2==0)
	            {
	            count++;
	            }
	        }
	    }
	    if(count==1&&count1==1)
	    return 1;
	    else
	    return 0;
}
