#include <stdio.h>

int main()
{
	int x,n,P,i;
	float S;
	printf("Veuillez saisir le nombre x : ");
	scanf("%d",&x);
	printf("Veuillez saisir le nombre n : ");
	scanf("%d",&n);
	S=0;
	P=1;
	for(i=1;i<=2*n+1;i++)
	{
		P=P*x;
		if (i%2!=0)
		{
			S=S+P*(1.0/i);
		}
	}
	printf("La somme est %f",S);
	return 0;
}
