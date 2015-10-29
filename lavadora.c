#include <stdio.h>
int main()
{
	int opcion,m=1;
	int kilo;
	int tipo;
	printf("cuantos kilos de ropa lavara, su lavadora solo admite 20kg\n");
	scanf("%d", &kilo);
	
	if (kilo>0 && kilo<=20)
	{
		if(kilo>=0 && kilo<=15)
		{
			if(kilo>=0 && kilo<=10)
			{
				printf("El Agua estara a nivel Minimo\n");
			}
			else
			{
			printf("El agua estara a nivel Medio\n");
			}
		}
		else
		{
			printf("el agua estara a nivel maximo\n");
		}
	}
	else
	{
		printf("su lavadora tiene mucha carga y no lavara\n");
		return 1;	
	}
	printf("ingres el tipo de ropa  de acuerdo a la siguiente tabla\n");
	printf(" 1= delicada\n");
	printf(" 2= Normal\n");
	printf(" 3= Sucia\n");
	scanf(" %i", &tipo);
		
	if (tipo>0 && tipo<=3)
	{
		if(tipo>0 && tipo<=2)
		{
			if(tipo>0 && tipo<=1)
			{
				printf("La ropa se lavara en 5 minutos\n");
			}
			else
			{
				printf("la ropa se lavara en 10 minutos\n");
			}
			
		}
		else
		{
			printf("la ropa se lavara en 20 minutos\n");
		}
	}
	else
		{
		printf("Opcion no valida\n");
		}
	printf("gracias\n");
}
