#include <stdio.h>

int main() {


float precoP, precoR, precoB;
int quantP, quantR, quantB;

printf("informe o preço do pão: ");
scanf("%f", &precoP);

printf("informe a quantidade do pão: ");
scanf("%d", &quantP);

printf("informe o preço da rosca: ");
scanf("%f", &precoR);

printf("informe o quantidade da rosca: ");
scanf("%d", &quantR);

printf("informe o preço do bolo: ");
scanf("%f", &precoB);

printf("informe o quantidade do bolo: ");
scanf("%d", &quantB);

printf("Produto\tPreço Unitário\tQuantidade\n");
printf("Pão:\tR$  %5.2f\t\t%d\nRosca:\tR$  %5.2f\t\t%d\nBolo:\tR$  %5.2f\t\t%d",precoP,quantP,precoR,quantR,precoB,quantB);


}
