#include <stdio.h>

int main()
{
	int u,d,c,n;
	for(n=100;n<=999;n++)
	{
		c=n/100;
    	d=(n%100)/10;
	    u=n%10;
		if(u*u*u+d*d*d+c*c*c==n)
		{
			printf("%d \n",n);
		}	
	}
	return 0;
}
