#include <stdio.h>

int main()
{
	int n,i,S;
	printf("Veuillez saisir un entier naturel strictement positif : ");
	scanf("%d",&n);
	S=n;
	for(i=1;i<=n;i++)
	{
		if(S%2==0)
		{
			S=S*(1.0/2.0);
		}
		else
		{
			S=3*S+1;
		}
	}
	printf("Le %deme terme de la suite est %d",n,S);
	return 0;
}


