#include <stdio.h>
#include <math.h>

/* 2) Escreva um programa em linguagem C que leia um número 
com parte fracionária (float ou double), e
calcule e exibe:
a) O arredondamento do número para cima;
b) O arredondamento do número para baixo;
c) O arredondamento do número para cima ou para baixo de 
acordo com a parte fracionária (função
ARREDONDA em algoritmos);
Observação: exibir os resultados na tela de forma ordenada, 
ou seja, os resultados de a), b) e c) de forma sequencial
*/

int main()
{
    float num1;
    int arredonCima, arredonBaixo, arredonda;
    printf("Escreva o numero: ");
    scanf("%f", &num1);

    arredonCima = ceil(num1);
    arredonBaixo = floor(num1);
    arredonda = round(num1);
  
  printf("a) Arredondando o numero para cima é: %d \n", arredonCima);
  printf("b) Arredondando o numero para baixo é: %d \n", arredonBaixo);
  printf("c) Arredondando de acordo com a parte fracionária é: %d \n", arredonda);
  
      
  
}