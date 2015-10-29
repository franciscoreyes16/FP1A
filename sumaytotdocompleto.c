#include<stdio.h>//libreria de E/S
/*programa para conocer la suma resta multiplicacion y divisions*/
float resultado;
float num1;
float num2;
int main()
{//iniciomain
printf("hola, este programa te ayuda a conocer la multiplicacion division resta y suma de dos numeros\n");
	printf("dame un mumero\n");
	scanf("%f", &num1);
	printf("dame otro mumero\n");
	scanf("%f", &num2);
	resultado= num1+num2;
	printf("el resultado de la suma es: %f\n", resultado);
	printf("dame un mumero\n");
	scanf("%f", &num1);
	printf("dame otro mumero\n");
	scanf("%f", &num2);
	resultado=num1-num2;
	printf("el resultado de la resta es: %f\n", resultado);
	printf("dame un mumero\n");
	scanf("%f", &num1);
	printf("dame otro mumero\n");
	scanf("%f", &num2);
	resultado=num1*num2;
	printf("el resultado de la multiplicacion es: %f\n", resultado);
	printf("dame un mumero\n");
	scanf("%f", &num1);
	printf("dame otro mumero\n");
	scanf("%f", &num2);
	resultado=num1/num2;
	printf("el resultado de la division es: %f\n", resultado);
}//finmain
