#include <stdio.h>
int a,b,c,d,e,f,g,h,i,j;
int main()
{
	printf("Programa que ayuda a determinar el numero mayor y\n");
	printf("el numero menor que el usuario ingrese\n");
	printf("\nIngrese el primer numero\n");
	scanf("%d",&a);
	printf("\nIngrese el segundo numero\n");
	scanf("%d",&b);
	printf("\nIngrese el tercer  numero\n");
	scanf("%d",&c);
	printf("\nIngrese el cuarto numero\n");
	scanf("%d",&d);
	printf("\nIngrese el quinto numero\n");
	scanf("%d",&e);
	printf("\nIngrese el sexto numero\n");
	scanf("%d",&f);
	printf("\nIngrese el septimo numero\n");
	scanf("%d",&g);
	printf("\nIngrese el octavo numero\n");
	scanf("%d",&h);
	printf("\nIngrese el noveno numero\n");
	scanf("%d",&i);
	printf("\nIngrese el decimo numero\n");
	scanf("%d",&j);
	if(a>b&& a>c && a>d&&a>e&&a>f&&a>g&&a>h&&a>i&&a>j)
	{
		printf("el numero mayor es %d\n", a);
	}
	else if (b>a&&b>c&&b>d&&b>e&&b>f&&b>g&&b>h&&b>i&&b>j)
	{
		printf("el numero mayor es %d\n", b);
	}
	else if(c>a&&c>b&&c>d&&c>e&&c>f&&c>g&&c>h&&c>i&&c>j)
	{
		printf("el numero mayor es %d\n", c);
	}
	else if(d>b&& d>c &&d>e&&d>f&&d>g&&d>h&&d>i&&d>j)
	{
		printf("el numero mayor es %d\n", d);
	}
	else if(e>b&& e>c && e>d&&d>f&&d>g&&d>h&&d>i&&d>j)
	{
		printf("el numero mayor es %d\n", e)	;
	}	
	else if(f>a&&f>b&&f>c&&f>d&&f>e&&f>g&&f>h&&f>i&&f>j)
	{
		printf("el numero mayor es %d\n", f);
	}
	else if(g>a&&g>b&&g>c&&g>d&&g>e&&g>h&&g>i&&g>j)
	{
		printf("el numero mayor es %d\n", g);
	}
	else if(h>a&&h>c&&h>d&&h>e&&h>f&&h>g&&h>i&&h>j)
	{
		printf("el numero mayor es %d\n", h);
	}
	else if(i>a&&i>c&&i>d&&i>e&&i>f&&i>g&&i>h&&i>j)
	{
		printf("el numero mayor es %d\n", i);
	}
	else if(j>a&&j>c&&j>d&&j>e&&j>f&&j>g&&j>h&&j>i)
	{
		printf("el numero mayor es %d\n", j);
	}
	
	if(a<b&& a<c && a<d&&a<e&&a<f&&a<g&&a<h&&a<i&&a<j)
	{
		printf("el numero menor es %d\n", a);
	}
	else if (b<a&&b<c&&b<d&&b<e&&b<f&&b<g&&b<h&&b<i&&b<j)
	{
		printf("el numero menor es %d\n", b);
	}
	else if(c<a&&c<b&&c<d&&c<e&&c<f&&c<g&&c<h&&c<i&&c<j)
	{
		printf("el numero menor es %d\n", c);
	}
	else if(d<b&& d<c &&d<e&&d<f&&d<g&&d<h&&d<i&&d<j)
	{
		printf("el numero menor es %d\n", d);
	}
	else if(e<b&& e<c && e<d&&d<f&&d<g&&d<h&&d<i&&d<j)
	{
		printf("el numero menor es %d\n", e)	;
	}	
	else if(f<a&&f<b&&f<c&&f<d&&f<e&&f<g&&f<h&&f<i&&f<j)
	{
		printf("el numero menor es %d\n", f);
	}
	else if(g<a&&g<b&&g<c&&g<d&&g<e&&g<h&&g<i&&g<j)
	{
		printf("el numero menor es %d\n", g);
	}
	else if(h<a&&h<c&&h<d&&h<e&&h<f&&h<g&&h<i&&h<j)
	{
		printf("el numero menor es %d\n", h);
	}
	else if(i<a&&i<c&&i<d&&i<e&&i<f&&i<g&&i<h&&i<j)
	{
		printf("el numero menor es %d\n", i);
	}
	else if(j<a&&j<c&&j<d&&j<e&&j<f&&j<g&&j<h&&j<i)
	{
		printf("el numero menor es %d\n", j);
	}
	printf("\nexcelente dia\n")	;
}
