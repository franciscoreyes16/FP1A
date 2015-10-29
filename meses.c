#include <stdio.h>

int main()
{
   int mes;

   printf( "Introduzca el numero del mes " );
   scanf( "%d", &mes );

   switch ( mes )
   {
    case 1 : printf( "Enero\n");
               break;
    case 2 : printf( "Febrero\n");
               break;
    case 3 : printf( "MArzo\n");
               break;
    case 4 : printf( "Abril\n");
               break;
    case 5 : printf( "Mayo\n");
               break;
    case 6 : printf( "Junio\n");
               break;
    case 7 : printf( "Julio\n");
               break;
    case 8 : printf("Agosto\n");
    		   break;
    case 9 : printf("septiembre\n");
    		   break;
    case 10: printf("octubre\n");
    		break;
    case 11: printf("noviembre\n");
    		break;
    case 12: printf("diciembre\n");
    
   default : printf( "El año solo contiene doce meses.\n" );
   }

   return 0;
}
