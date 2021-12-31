/*

dados de rpg (4, 6, 8, 10, 12, 20 lados)

*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int dado;

    srand(time(NULL));

    printf(" [ 1 ] --> D4\n [ 2 ] --> D6\n [ 3 ] --> D8\n [ 4 ] --> D10\n [ 5 ] --> D12\n [ 6 ] --> D20\n\n");

    

    while (1)
    {
        printf("--> ");
        scanf("%i", &dado);

        switch (dado)
        {
        case 1:
            printf("%i\n", rand() % 5);
            break;

        case 2:
            printf("%i\n", rand() % 7);
            break;
        
        case 3:
            printf("%i\n", rand() % 9);
            break;

        case 4:
            printf("%i\n", rand() % 11);
            break;
        
        case 5:
            printf("%i\n", rand() % 13);
            break;

        case 6:
            printf("%i\n", rand() % 21);
            break;

        default:
            printf("alternativa invalida\n");
            break;
        }
    }
}
