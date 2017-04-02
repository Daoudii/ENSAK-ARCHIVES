#include <stdio.h>

int main()
{
	int u,v,w,i,n;
	printf("Veuillez saisir un entier positif : ");
	scanf("%d",&n);
	u=1;
	v=1;
	i=2;
	while (i<=(n))
	{
		w=u+v;
		v=u;
		u=w;
		i++;
	}
	printf("Le %deme terme de la suite est %d",n,w);
	return 0;
}
