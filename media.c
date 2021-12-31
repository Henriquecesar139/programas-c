/*

Programa que analisa a média de um aluno

média igual ou maior que 5: Aprovado
média menor que 5: Reprovado

*/

#include <stdlib.h>
#include <stdio.h>

int main () {

    int nota1, nota2, media;
    char nome;


    printf("Nome do aluno: ");
    scanf("%s", &nome);
    printf("digite a primeira nota: ");
    scanf("%i", &nota1);
    printf("digite a segunda nota: ");
    scanf("%i", &nota2);
    
    media = (nota1 + nota2) / 2;

    if (media >= 5)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Reprovado\n");
    }
     
    return 0;
}