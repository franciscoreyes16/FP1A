#include<stdio.h>
int i,j;
int ma[3][3];
int mb[3][3];
int mc[3][3];
int main()
{
	printf("Proframa que ayuda a multiplicar dos matrices de tamaño 3x3\n");

	printf("Ingrese la matriz -A- en orden a11, a12, a13, a21, a22, a23, a31, a32, a33: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&ma[i][j]);
		}
	}
	
	printf("Matriz A: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",ma[i][j]);	
		}			
			printf("\n");
	}

	printf("Ingrese la matriz -B- en orden b11, b12, b13, b21, b22, b23, b31, b32, b33: \n");
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
		{	
			scanf("%d",&mb[i][j]);
		}
	}
	printf("Matriz B: \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",mb[i][j]);	
		}			
			printf("\n");
	}

	for(i=0;i<3;i++)
	{
      for(j=0;j<3;j++)
	  {
          mc[i][j]=ma[i][j]*mb[i][j];
      }
	}

  printf("El producto de las dos matrice es: \n");
	for(i=0;i<3;i++)
	{
      for(j=0;j<3;j++)
	  {
        printf("%d\t",mc[i][j]);
        }
        printf("\n");
	}
}
