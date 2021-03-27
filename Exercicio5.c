#include <stdio.h>

int main() {


int peso;
float altura;
char nome[4];

printf("informe seu peso: ");
scanf("%d", &peso);

printf("Informe sua altura: ");
scanf("%f", &altura);

printf("Informe seu nome: ");
scanf("%s",&nome);

printf("Dados de %s, sua altura é %5.2f m, e Peso = %d kg",nome,altura,peso);


}
