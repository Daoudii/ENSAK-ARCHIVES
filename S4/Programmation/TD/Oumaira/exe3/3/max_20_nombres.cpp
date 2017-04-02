#include <stdio.h>

int main()
{
	int n,i,max,imax ;
	i=1;
	max=0;
	while (i<=20)
	{
		printf("Veuillez saisir le nombre numero %d : ",i);
		scanf("%d",&n);
		if (n>=max && (n%10)==0)
		{
			max=n;
			imax=i;
		}
		i++;
	}
	printf("Le maximum des nombres qui se termine par 0 est %d et sa position est %d" ,max,imax);
	return 0;
}
