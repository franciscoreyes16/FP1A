#include<stdio.h>
#include<stdlib.h>
   int arreglo[10];
   int i;
   int moda[10];
   int mayor=0;
   int posmayor;
   int suma=0;
   float promedio;
   int main()
    {
    for(i=0; i<10; i++){
   	printf("Dame la calificacion del alumno [%d]:", i+1);
   	scanf("%d", &arreglo[i]);
    }
    for(i=0; i<10; i++){
    	printf("Calificacion %d\n", arreglo[i]);
    }
    for(i=0; i<10; i++){
    	suma=suma+arreglo[i];
     
   }
    	promedio=(float)suma/10;
    	printf("El promedio es: %f\n", promedio);
    	
    for(i=0; i<10; i++)
    {
    	moda[arreglo[i]-1]++;

    }
	for(i=0; i<10; i++)
	{
	if(moda[i]>mayor)
	{
		mayor=moda[i];
		posmayor=i;
	}
	}
			printf("La moda es: %d\n", posmayor+1);
			
			system("pause");
	}
