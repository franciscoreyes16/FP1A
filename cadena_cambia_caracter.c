#include<stdio.h>
char cadena[10];
char c1,c2;
char i;
int main()
{
	
 	printf("Ingrese la palabra de hasta diez caracteres\n");
 	scanf("%s",cadena);
  	printf("que letra quiere cambiar\n");
	scanf("%s",&c1);
 	printf("Por que letra quiere cambiarlo\n");
 	scanf("%s",&c2);
 	
 	for(i=0;i<10;i++)
 		{
 		  	if(cadena[i]==c1)
  			{
   			  cadena[i]=c2;
    		}
 		}
 			printf("%s",cadena);
}
