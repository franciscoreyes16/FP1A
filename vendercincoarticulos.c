#include <stdio.h>
int a,menu,pz,resultado,x,total;
int main()
{
    printf("Introduzca a la opcion que quiere ir\n");
    printf("de acuerdo a lo siguiente\n");
    printf("1= Vender\n");
    printf("2= Ver ganancias\n");
    scanf("%d", &menu);
    switch(menu)
    {
                case 1:
				
				 printf("vender\n");
                 printf("\nPunto de venta\n");
                 printf("\nIngrese el numero del producto que comprara\n");
                 printf("\n $9.00 -----Papas = 1 \n");
                 printf("\n $5.00 -----Cigarros = 2 \n");
                 printf("\n $25.00-----Condones = 3 \n");
                 printf("\n $10.00-----Coca cola = 4 \n");
                 printf("\n $3.00------Chicles= 5 \n");
                 printf("\nIngrese el numero de producto\n");
                 scanf("%d", & a);
                 
                 if(a==1){
                 printf("ingrese la cantidad que va a llevar\n");
                 scanf("%d",& pz);	
                 resultado =9*pz;
                 printf("el total de %d papas que llevara es igual a %d\n",pz,resultado);
                 }
                 else if(a==2){
               	 printf("ingrese la cantidad que va a llevar\n");
                 scanf("%d",& pz);	
                 resultado =5*pz;
                 printf("el total de %d cigarros que llevara es igual a %d\n",pz,resultado);
                 }
                 else if(a==3){
               	 printf("ingrese la cantidad que va a llevar\n");
                 scanf("%d",& pz);	
                 resultado =25*pz;
                 printf("el total de %d condones que llevara es igual a %d\n",pz,resultado);
            	 }
            	 else if(a==4){
               	 printf("ingrese la cantidad que va a llevar\n");
                 scanf("%d",& pz);	
                 resultado =10*pz;
                 printf("el total de %d coca cola que llevara es igual a %d\n",pz,resultado);
             	}
                 else if(a==5){
               	 printf("ingrese la cantidad que va a llevar\n");
                 scanf("%d",& pz);	
                 resultado =3*pz;
                 printf("el total de %d chicles que llevara es igual a %d\n",pz,resultado);
				 }
           	     else 
           	    
           	     printf("ERROR!!!!!!!! SOLO HAY CINCO PRODUCTOS\n");
           	    break;
				   
				case 2:
				x=resultado;
				total=x+resultado;
				printf("\nEl gran total de su venta del dia de hoy es %d pesos\n", total);
				break;
				
				default:
				printf("\n-E-R-R-O-R-\n");
    }
  return main();
}
