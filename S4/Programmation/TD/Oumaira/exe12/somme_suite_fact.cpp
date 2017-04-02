#include <stdio.h>

int main()
{
	int n,i;
	float S,F;
	printf("Veuillez saisir un entier naturel SVP : ");
	scanf("%d",&n);
	F=1;
	S=1;
	for (i=1;i<=n;i++)
	{
		F=F/i;
		S=S+F;
	}
	printf("La somme de cette suite est %f",S);
	return 0;
}
