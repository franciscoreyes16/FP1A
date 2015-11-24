#include<stdio.h>

char cadena[9];
char volteada[9];
char i,j;

int main()
{
	printf("Ingrese su nombre\n");
	scanf("%s",cadena);
		
	j=9;
	for(i=0;i<10;i++)
	{
		volteada[i]=cadena[j];
		j--;
		
	}
	printf("%s",volteada);		
		
	
}

