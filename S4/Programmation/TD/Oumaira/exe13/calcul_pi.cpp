#include <stdio.h>

int main()
{
	int i,k,n;
	float pi;
	printf("Veuillez saisir un nombre entier SVP : ");
	scanf("%d",&n);
	pi=0;
	k=1;
	for(i=0;i<n;i++)
	{
		pi=pi+k*(1.0/(2*i+1));
		k=-k;
	}	
	pi=4*pi;
	printf("La valeur de pi vaut %f",pi);
	return 0;
}
