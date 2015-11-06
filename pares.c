#include<stdio.h>
int final,i,j;
int main()
{
	printf("Ingrese el final de su secuencia\n");
	scanf("%d",&final);
	
	for (i=1; i<=final; i++)
	{
		printf("\n");
		printf("%d", i);
	
	if (i%2==0)
	{
		for (j=2; j<=i; j++)
		{
			printf("%d", i);
		}
		}
	}
}

