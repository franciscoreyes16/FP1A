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
                  do
                  {
                      printf("%d",i);
                      j=j+1;
                      }
                      while((j<=i) && (i%2==0));
                      printf("\n");
                      i++;  /* puede ocuparse con i++ o i=i+1;*/
                    }
                      
                      
    system("pause");
}
