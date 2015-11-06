#include<stdio.h>
int n1,n2,suma,i;

int main()
{
	printf("ingrese los numeros que desea multiplicar\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	suma=0;
	for (i=1; i<=n2; i++)
	{
	suma=suma+n1;	
	}
	printf("%d\n", suma);
	
}
