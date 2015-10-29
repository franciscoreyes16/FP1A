#include <stdio.h>

int main()
{
	int a,b,c;
	printf("programa que ayuda a ordenar los numeros de mayor a menor\n");
	printf("Introduzca el Primer numero\n");
	scanf("%d", &a);
	printf("Introduzca el segundo numero\n ");
	scanf("%d", &b);
	printf("Ingrese el tercer numero\n");
	scanf("%d", &c);
	
	if (c<b && b<a)
	printf("El orden de sus numeros es %d %d %d\n",  a, b, c);
	else
	if (a<b && b<c)
	printf("el orden de sus numeros es %d %d %d\n",  c, b, a);
	else 
	if (a<b && c<a)
	printf("el orden de sus numeros es %d %d %d\n", b, a, c);
	else 
	if (a<c && c<b)
	printf("el orden de sus numeros es %d %d %d\n", b, c, a);
	else
	if (b<c && b<a && a<c)
	printf("el orden de sus numeros es %d %d %d\n", c, a, b);
	else
	printf("el orden de sus numeros es %d %d %d\n", a, c, b);
	printf("gracias\n")	;
}
