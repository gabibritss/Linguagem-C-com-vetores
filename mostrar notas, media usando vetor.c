#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tamanho = 3;
    int notas[tamanho];
    int contador;
    int soma = 0;
    float media;

    for (contador = 0;contador<tamanho; contador++)
    {
        printf("Digite a sua  %d nota:", contador + 1);
        scanf("%d", &notas[contador]);

        soma += notas [contador];
       
    }
       media += soma / tamanho;
    
     printf("\n Exibindo oas notas digitadas...\n");

    for (contador = 0;contador<tamanho; contador++)
    {

        printf("%d Notas: %d\n", contador + 1, notas[contador]);
    }
     
     printf("Soma: %d\n", soma);
     printf("Média:%.1f\n", media);


return 0;
}