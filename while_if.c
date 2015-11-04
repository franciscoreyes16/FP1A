#include<stdio.h>
int a=1;
int b=1;
int i;

int main()
{
	printf("Escriba el numero:\n");
	scanf("%d",& i);
		  while(a<=i)
	{
		if(a%2==0)
		{
		 while(b<=a)
		 {
		 	printf("\n" );
			printf("\n%d\n",a);
			b=b+1;
		 }
		}
		else
			{
			printf("\n");
			printf("\n%d\n",a);
			}
		a=a+1;
		b=1;	
	}
}
