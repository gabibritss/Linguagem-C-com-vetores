#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numeros[5];
    int contador;

    for (contador = 0; contador < 5; contador++)
    {
        printf("Digite o %d n�mero:", contador +1);
        scanf("%d", &numeros[contador]);
    }

    printf("\n Exibindo os n�meros digitados...\n");

    for (contador = 0; contador < 5; contador++)
    {

        printf("%d N�mero: %d\n", contador + 1, numeros[contador]);
    }

    return 0;
}