#include<stdio.h>
 int a=0,d1,m1,d2,m2,i=0,j,k,f,g;
 int main()
 {
 	printf("Ingrese el dia inicial\n");
	scanf("%d",&d1);
	printf("Ingrese el mes inicial\n");
	scanf("%d",&m1);
	printf("Ingrese el dia final\n");
	scanf("%d",&d2);
	printf("Ingrese el mes final\n");
	scanf("%d",&m2);
	
	if (d1<=30 && m1<=12 && d2<=30 && m2<=12)
	{	
	f=m2-m1;
	for (i=f;i<=f;i++)
{
		j=i*30; 
		k=30-d2; 
		g=30-d1;
		a=j-k+g;
		printf("Los dias transcurridos son %d",a);
}	
	}
	else
	{
		printf("ERROR-------Revisa tu calendario\n");
	}
}
