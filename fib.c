/*
	sequencia de fibonacci em C
*/

#include <stdio.h>
#include <stdlib.h>


int main () {

    int n1, n2, n3, v;

    n1 = 0;
    n2 = 1;

    printf("Digite quantos valores deseja exibir: ");
    scanf("%i", &v);

    for (size_t i = 0; i < v; i++)
    {
        n3 = n1 + n2;
        printf("%i \n", n3);
        n1 = n2;
        n2 = n3;
    }
    
    

    return 0;
}
