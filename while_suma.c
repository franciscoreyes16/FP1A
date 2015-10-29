#include<stdio.h>
int i,final,suma;
int main()
 {
 	printf("Ingrese el numero final al que quiere que llegue su secuencia\n");
	 scanf("%d", & final);
 	i=1;
  	while (i<=final)
 	{
 		printf("%d\n", i);
 		suma=suma+i;
                i=i+1;
  	}     
        printf("La suma de sus numeros impresos es %d\n", suma);
}
 
