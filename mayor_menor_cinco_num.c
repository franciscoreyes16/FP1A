#include <stdio.h>

int a,b,c,d,e;
int main()
{
	printf("Ingrese los numeros\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	
	if(a>b&&a>c&&a>d&&a>e)
	{
		printf("el numero mayor es %d\n",a);
	}
	else if (b>a&&b>c&&b>d&&b>e)
	{
		printf("el numero mayor es %d\n",b);
	}
	else if (c>a&&c>b&&c>d&&c>e)
	{
		printf("el numero mayor es %d\n",c);
	}
	else if (d>a&&d>b&&d>c&&d>e)
	{
		printf("el numero mayor es %d\n",d);
	}
	else if (e>a&&e>b&&e>c&&e>d)
	{
		printf("el numero mayor es %d\n",e);
	}
	if(a<b && a<c && a<d && a<e)
	{
		printf("el numero menor es %d\n",a);
	}
	else if (b<a && b<c &&b<d&&b<e)
	{
		printf("el numero menor es %d\n",b);
	}
	else if (c<a&&c<b&&c<d&&c<e)
	{
		printf("el numero menor es %d\n",c);
	}
	else if (d<a&&d<b&&d<c&&d<e)
	{
		printf("el numero menor es %d\n",d);
	}
	else if (e<a&&e<b&&e<c&&e<d)
	{
		printf("el numero menor es %d\n",e);
	}


}




