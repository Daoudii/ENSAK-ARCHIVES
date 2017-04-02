#include <stdio.h>

int main()
{
	int n,i,fact ;
	printf("Veuillez saisir un nombre entier SVP : ");
	scanf("%d",&n);
	i=1;
	fact=1;
	while (i<=n)
	{
		fact*=i;
		i++;
	}
	printf("Le factoriel de %d est %d",n,fact);
	return 0;
}
