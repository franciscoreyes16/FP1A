#include<stdio.h>
int identidad [3][3];
int escalar;
int i,j;
int main()
{
	printf("Su matriz identidad es\n");
	identidad[0][0]=1;
	identidad[0][1]=0;
	identidad[0][2]=0;
	identidad[1][0]=0;
	identidad[1][1]=1;
	identidad[1][2]=0;
	identidad[2][0]=0;
	identidad[2][1]=0;
	identidad[2][2]=1;
	for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
			{
			printf("%d\t",identidad[i][j]);	
			}			
			printf("\n");
		}
	printf("ingrese el escalar a multiplicar\n");
	
	scanf("%d",&escalar);
	
	for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
			{
			identidad[i][j]=identidad[i][j]*escalar;
			printf("%d\t",identidad[i][j]);	
			
			}
			printf("\n");
		}
}
