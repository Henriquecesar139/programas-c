/*

Fatorial de um número em C

*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int fatorial, n;
    printf("Insira um valor: ");
    scanf("%d", &n);

    for (fatorial = 1; n > 1; n = n - 1) {
    fatorial = fatorial * n;

    }

    printf("\nFatorial: %i\n", fatorial);
    

    return 0;
}