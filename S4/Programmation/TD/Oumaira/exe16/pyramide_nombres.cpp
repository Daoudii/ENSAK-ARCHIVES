#include <stdio.h>

int main()
{
	int n,i,j,k,m;
	printf("Veuillez saisir le nombre des lignes SVP : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			printf(" ");
		}
		for(k=i+1;k<=2*i+1;k++)
		{
			printf("%d",k%10);
		}
		for(k=2*i;k>=i+1;k--)
		{
			printf("%d",k%10);
		}
		printf("\n");
	}
	return 0;
}
