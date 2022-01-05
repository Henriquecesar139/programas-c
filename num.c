/*

jogo de advinhação de número

*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num, num2;

    srand(time(NULL));

    num = rand() % 10;

    printf("escolha um numero de 0 a 10: ");

    while (1)
    {
        scanf("%i", &num2);

        if (num2 == num)
        {
            printf("Acertou!!!\n");
            break;
        }else {
            printf("Errou\n");
        }
        

    }
    


    return 0;
}