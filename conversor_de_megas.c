#include<stdio.h>//libreria de E/S
/*programa que convierta a unidades*/
float resultado;
float mb;
int main()
{//inicio main
	printf("ingrese el valor de mega\n");
	scanf("%f",&mb);
	resultado= mb*8388608;
	printf("la conversion de tus megabytes  a bit es %f\n", resultado);
	resultado= mb*1048576;
	printf("la conversion de tus megabytes  a bytes es %f\n", resultado);
	resultado= mb*1024;
	printf("la conversion de tus megabytes  a kilobytes es %f\n", resultado);
	resultado= mb/1024;
	printf("la conversion de tus megabytes  a gigabytes es %f\n", resultado);
	resultado= mb/1048576;
	printf("la conversion de tus megabytes  a terabytes es %f\n", resultado);
}//fin main
