#include <stdio.h>
#include <math.h>

/* 1) Escreva um programa em linguagem C que leia dois números
inteiros, e calcula e exibe:
a) A soma, a subtração, a multiplicação, o quociente da divisão
entre eles e o resto da divisão entre eles;
b) O primeiro número elevado ao segundo número (potenciação);
c) A raiz quadrada do primeiro número;
d) A raiz quadrada do segundo número;
Observação: exibir os resultados na tela de forma ordenada, 
ou seja, os resultados de a), b), c) e d) de forma sequencial
*/

int main()
{
    int num1, num2, resultadoSoma, potenciacao, raiz1, raiz2;
    printf("Escreva o primeiro numero: ");
    scanf("%d", &num1);

    printf("Escreva o segundo numero: ");
    scanf("%d", &num2);

    resultadoSoma = num1 + num2;
    potenciacao = pow(num1, num2);
    raiz1 = sqrt(num1);
    raiz2 = sqrt(num2);

  printf("a) O resultado da soma é: %d \n", resultadoSoma);
  printf("b) O resultado da potenciação é: %d \n", potenciacao);
  printf("c) A raiz quadrada do primeiro numero é: %d \n", raiz1);
  printf("d) A raiz quadrada do segundo numero é: %d \n", raiz2);
  
      
  
}