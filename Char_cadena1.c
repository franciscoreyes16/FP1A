#include<stdio.h>//captura nombre y lo imprime al reves
    char cadena[10];
    char volteada[10];
    int j=9;
    int i;
    int main()
    {
    	scanf("%s", cadena);
    	for(i=0; i<10; i++)
    	{
    		volteada[i]=cadena[j];
    		j--;
    	}
    	
    	
    	printf("%s",cadena);
    }
