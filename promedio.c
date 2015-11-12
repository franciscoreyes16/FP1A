#include<stdio.h>
int cal [10];
int i;
float suma;
float prom;

int main()
{
	
	for(i=0;i<10;i++)
	{
		printf("Ingrese las diez calificaciones \n");
		scanf("%i",&cal[i]);
	}
		suma=cal[0]+cal[1]+cal[2]+cal[3]+cal[4]+cal[5]+cal[6]+cal[7]+cal[8]+cal[9];
		prom=suma/10;
		printf("El promedio de sus diez calificaciones ingresadas es: %f",prom);
}
