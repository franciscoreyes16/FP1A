#include<stdio.h>

int final;
int i;
int j;
int main()

{
    printf("dame un numero");
    scanf("%d",&final);
    i=1;
    while(i<=final)
    {
       j=1;
       if(i%2==0)
       {
       while (j<=i)
      {
        printf("%d",i);
        j=j+1;
          }
                 
         }
                   
      else
      {
      
        printf("\n");
        
        }
            i=i+1;     
             }
    
    system ("pause");
}
