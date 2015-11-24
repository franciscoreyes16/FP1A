#include<stdio.h> 
int n[10];
int i,j,a,b;
int main()
{ 
	printf("Programma que determina la mediana de diez numeros ingresados\n");
	
	for(i=0;i<10;i++)
		{ 
			printf("Ingrese los numeros:"); 
			scanf("%d",&n[i]);
		} 
	for(i=0;i<10;i++) 
			
	for(j=i;j<10;j++) 
	if(n[i]>n[j])
		{ 
			a=n[i]; 
			n[i]=n[j]; 
			n[j]=a;
		} 
		printf("los numeros ordenadas son: \n"); 
		for(i=0;i<10;i++) 
		{
			printf("%d\n",n[i]);
		}
		 
		
		{
			b=n[i]/2;
			printf("la mediana de sus numeros ingresados es el numero %d\n",n[b-1]);
		}
		
} 
