#include<stdio.h>//libreria de E/S
/*programa para sumar dos numeros distintos*/
int resultado;
int num1;
int num2;
int main()
{//iniciomain
	printf("dame un mumero\n");
	scanf("%d", &num1);
	printf("dame un mumero\n");
	scanf("%d", &num2);
	resultado= num1+num2;
	printf("el resultado es: %d\n", resultado);
	printf("aprende a sumar mejor\n");
}//finmain
