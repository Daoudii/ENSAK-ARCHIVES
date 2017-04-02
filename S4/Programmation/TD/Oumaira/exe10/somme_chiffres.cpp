#include <stdio.h>

int main()
{
	int n,r,S;
	printf("Veuillez saisir un nombre entier SVP : ");
	scanf("%d",&n);
	S=0;
	while(n!=0)
	{
		r=n%10;
		S=S+r;
		n=n/10;
	}
	printf("La somme des chiffres ce nombre est %d",S);
	return 0;
}
