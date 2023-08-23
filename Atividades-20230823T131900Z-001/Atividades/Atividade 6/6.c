#include <stdio.h>

main() {

    //Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.

    //variaveis

    float custo, frete, despesa, valorVenda, lucro, valorBruto;

    printf("/n Digite o custo do produto:");
    scanf("%f", &custo);

    printf("/n Digite o frete do produto:");
    scanf("%f", &frete);

    printf("/n Digite o despesa do produto:");
    scanf("%f", &despesa);

    //calcular o valor bruto do produto
    //valor bruto = custo + frete + despesa

    valorBruto = custo + frete + despesa;

    //informar o valor bruto para o usuario

    printf("O valor bruto do produto e: R$%.2f. Digite o valor da venda:");
    scanf("%f", &valorVenda);

    //calculo do lucro

    lucro = (valorVenda - valorBruto)*100/valorBruto;

    //apresentacao do lucro
    printf("Sua porcentagem de lucro e: %.2f%%, lucro");

}