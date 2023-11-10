#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numeros[10];
    int contador;

    for (contador = 0; contador < 10; contador++)
    {
        printf("Digite o %d número:", contador +1);
        scanf("%d", &numeros[contador]);
    }

    printf("\n Exibindo os números digitados...\n");

    for (contador = 0; contador < 10; contador++)
    {

        printf("%d Número: %d\n", contador + 1, numeros[contador]);
    }

    return 0;
}