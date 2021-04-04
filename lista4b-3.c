#include <stdio.h>
#include <string.h>

/* 3) Escreva um programa em linguagem C que leia dois literais,
e armazene-os nas variáveis LITERAL1 e
LITERAL2, e exiba:
a) O resultado da concatenação entre LITERAL1 e LITERAL2;
b) O comprimento de LITERAL1;
c) O comprimento de LITERAL2;
d) Copie o conteúdo de LITERAL2 em um LITERAL3, e imprima 
LITERAL3.
Observação: exibir os resultados na tela de forma ordenada, 
ou seja, os resultados de a), b), c) e d) de forma sequencial.
*/

int main()
{
    char literal1[50]; 
    char literal2[50];
    int comp1, comp2;
    char literal3[50];
  
    printf("Escreva o primeiro literal: ");
    scanf("%s", literal1);

    printf("Escreva o segundo literal: ");
    scanf("%s", literal2);

    comp1 = strlen(literal1);
    comp2 = strlen(literal2);
    strcat(literal1, literal2);
    strcpy(literal3, literal2);
  
 printf("a) O resultado da concatenação é: %s \n", literal1); 
 printf("b) O comprimento do literal1 é: %d \n", comp1);
 printf("c) O comprimento do literal2 é: %d \n", comp2); 
 printf("d) O conteudo do literal3 é: %s \n", literal3); 

}