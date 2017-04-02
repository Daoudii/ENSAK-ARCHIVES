#include <stdio.h>

int main()
{
	int n,i;
	float x,S,T,P,F;
	printf("Veuillez saisir la variable x : ");
	scanf("%f",&x);
	printf("Veuillez saisir l'ordre n : ");
	scanf("%d",&n);
	S=1;
	T=0;
	P=1;
	F=1;
	for(i=1;i<=n;i++)
	{
		P=P*x;
		F=F*i;
		T=P*((1.0)/F);
		S=S+T;
	}
	printf("La valeur approchee de exp(%f) est %f",x,S);
	return 0;
}
