#include <stdio.h>

/* Uma padaria deseja desenvolver um
programa que imprima uma tabela com
informações sobre seus produtos. Crie um
programa em linguagem C que leia:
• o preço e a quantidade de pão;
• o preço e a quantidade de rosca;
• o preço e a quantidade de bolo.
Após a leitura dos dados, imprima os dados
lidos de acordo com a figura abaixo.
Dicas:
• Para alinhar os dados da tabela, utilize
tabulações "\t", isto é, TAB. Não utilize
espaços em branco!
• O preço de cada produto deve ser impresso
com 2 casas decimais, e ocupando um total
máximo de 5 caracteres na tela. Para isso,
utilize o comando de formato %5.2f
*/



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
