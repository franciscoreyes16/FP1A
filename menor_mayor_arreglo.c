#include<stdio.h> 
int num[10];
int i,j,a; 
int main()
{ 

	for(i=0;i<10;i++)
	{ 
	printf("Ingrese los numeros:"); 
	scanf("%d",&num[i]);
	} 
		for(i=0;i<10;i++) 
			
			for(j=i+1;j<10;j++) 
			
				if(num[i]>num[j])
				{ 
					a=num[i]; 
					num[i]=num[j]; 
					num[j]=a;
				} 
					printf("Los numeros ordenados son: \n"); 
					for(i=0;i<10;i++) 
					printf("%d\n",num[i]); 
} 
