#include <stdio.h>

int main()
{
	int a,b,r;
	printf("Veuillez saisir deux nombres entiers positifs non nuls SVP : ");
	scanf("%d %d",&a,&b);
	r=a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	printf("Le PGCD de ces deux nombres est %d",b);
	return 0;
}
