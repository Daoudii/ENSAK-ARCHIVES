#include <stdio.h>

int main()
{
	int i,j,n;
	printf("Veuillez saisir le nombre des lignes SVP : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
