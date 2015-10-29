#include<stdio.h>//libreria de E/S
/*programa para conocer la suma resta multiplicacion y division*/
float resultado;
float num1;
float num2;
int main()
{//iniciomain
	printf("dame un mumero\n");
	scanf("%f", &num1);
	printf("dame otro mumero\n");
	scanf("%f", &num2);
	resultado= (int)num1+num2;
	printf("el resultado de la suma es: %f\n", resultado);
	resultado= (int)num1-num2;
	printf("el resultado de la resta es: %f\n", resultado);
	resultado= (int)num1*num2;
	printf("el resultado de la multiplicacion: %f\n", resultado);
	resultado= num1/num2;
	printf("el resultado de la division: %f\n", resultado);
}//finmain
