#include<stdio.h> 

int main()
{
	int mes;
	printf("introduzca el numero del mes\n");
	scanf( "%d", &mes);
	if( mes==1)
		printf("enero\n");
	else if( mes==2)
		printf("febrero\n");
	else if( mes==3)
		printf("marzo\n");
	else if( mes==4)
		printf("abril\n");
	else if( mes==5)
		printf("mayo\n");
	else if( mes==6)
		printf("junio\n");
	else if( mes==7)
		printf("julio\n");
	else if( mes==8)
		printf("Agosto\n");
	else if( mes==9)
		printf("septiembre\n");
	else if( mes==10)
		printf("octubre\n");
	else if( mes==11)
		printf("noviembre\n");
	else if( mes==12)
		printf("diciembre\n");
	else
	printf("solo son doce meses\n");
}
