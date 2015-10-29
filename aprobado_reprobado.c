#include<stdio.h> //Libreria en e/s
/*programa que ayuda a conocer si estas reprobado o aprobado*/
int main()
{
   float calificacion;
   printf("Introduzca la calificacion\n");
   scanf( "%f", &calificacion);
   if ( calificacion >= 7 )
      printf("estas aprobado\n");
   else
      printf("estas reprobado\n");
}

