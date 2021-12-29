#include <stdio.h>
#include <stdlib.h>

int main () {

    int n1, n2, op;


    printf("[ 1 ] --> somar\n[ 2 ] --> subtrair\n[ 3 ] --> multiplicar\n[ 4 ] --> dividir\n\n");


    while (1) {
    
        printf("Selecione uma opcao: ");
        scanf("%i", &op);

        printf("Digite um numero: ");
        scanf("%i", &n1);
        printf("Digite outro numero: ");
        scanf("%i", &n2);

        switch (op)
        {
        case 1:
            printf("Soma: %i\n", n1 + n2);
            break;

        case 2:
            printf("Subtracao: %i\n", n1 - n2);
            break;

        case 3:
            printf("Multiplicacao: %i\n", n1 * n2);
            break;

        case 4:
            printf("Divisao: %i\n", n1 / n2);
            break;

        default:
            break;
        }
    }

    return 0;
}