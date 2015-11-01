#include <stdio.h> 
int main() {
	int a,b,r;
	int c;
	printf("primer numero\n ");
	scanf("%d",&a);
	printf("segundo  numero \n");
	scanf("%d",&b);
		do 
		{
			r=r+b;
			c=c+1;			
		}
		while(c<=a);
		printf("el resultado es: %d",r);
}
