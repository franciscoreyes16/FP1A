#include<stdio.h>

int inicio,fin,i;

int main()
{

	
	printf("Ingrese el inicio y el final del rango\n");
	scanf("%d", &inicio);
	scanf("%d", &fin);
	
	if (inicio<=fin)
	{
	
		for (i=inicio;i<=fin;i++)
		{
			printf("%d",i);
		}
	}
		else
	{
			for (i=inicio;i<=fin;i--)
		{	
			printf("%d",i);
		}
		
	}
	

	
}
