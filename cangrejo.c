#include<stdio.h>
int a,b,c,d,e,i;
int main()
{
	printf("Un cangrejo se cayo a un pozo\n");
	printf("Ingrese los metros que cayo el cangrejo\n");
	scanf("%d",&a);
	if(a>0)
	printf("Ingrese los metros que sube en el dia\n");
	scanf("%d",&b);
	printf("Ingrese los metros que retrocede de noche\n");
	scanf("%d",&c);
	if (b>c)
	{
	for (i=1;i<a;i++)
	{
		d=a-b;
		e=d+c;	
		a=e;
	}
	printf("%d",i);
	}	
	else 
	{
	printf("el cangrejo no saldra\n");	
	}
}
