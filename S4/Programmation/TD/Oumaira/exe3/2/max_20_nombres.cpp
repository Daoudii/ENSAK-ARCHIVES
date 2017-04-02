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
		if (n>=max)
		{
			max=n;
			imax=i;
		}
		i++;
	}
	printf("Le maximum de ces nombres est %d et sa position est %d" ,max,imax);
	return 0;
}
