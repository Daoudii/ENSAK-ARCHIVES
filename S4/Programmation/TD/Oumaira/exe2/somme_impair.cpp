#include <stdio.h>

int main()
{
	int N,S,i;
	printf("Veuillez saisir un nombre entier SVP : ");
	scanf("%d",&N);
	S=0;
	i=1;
	while (i<=N)
	{
		S=S+i;
		i=i+2;
	}
	printf("La somme des entiers impairs inferieurs a %d est %d",N,S);
	return 0;
}
