#include<stdio.h>
int a,b,i;
int main()
{
	printf("Ingrese lo numeros\n");
	scanf("%d",&a);
	scanf("%d",&b);

	if(a>b)
	{
	i=a;
	while (i>=b)
		{
		printf("%d",i);
		i=i-1;
		}
	}
	else 
	{
		i=a;
		while(i<=b)
		{
			printf("%d\n",i);
			i=i+1;
		}
	}
}

