#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
    printf("\n\t-------------------------");
    printf("\n\tQUANTOS S�O PARES E �MPARES");
    printf("\n\t--------------------------");
}

void parouimpar(int numero[])
{
   int par = 0;
   int impar = 0;
   
   int i;

   for ( i = 0; i < 6; i++)
   {
    if (numero[i] % 2 == 0)
    {
        par++;
    }
    else
    {
        impar++;
    }
   }
     
    printf("\nQuantidade de pares: %d",par);
    printf("\nQuantidade de �mpares: %d",impar);
}

int main()
{

    int i;
    int numero[6];
    

 for( i=0; i<6; i++)
 {
     printf("\nDigite o n�mero:");
     scanf("%d", &numero[i]);
 }

 
cabecalho();
 parouimpar(numero);

 return 0;
}