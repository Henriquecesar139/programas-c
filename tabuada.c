/*

Programa que realiza a tabuada de x número de 1 a 10

*/

#include <stdio.h>
#include <stdlib.h>


int main () {
    int n;

    printf("Digite um numero: ");
    scanf("%i", &n);

    for (size_t i = 0; i <= 10; i++)
    {
        printf("%i * %i = %i\n", n, i, i * n);
    }
    

    return 0;
}
