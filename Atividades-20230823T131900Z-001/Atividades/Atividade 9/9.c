#include <stdio.h>

main() {

    //Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.

    //variaveis

    float salarioAtual, porcentagemReajuste, novoSalario, reajusteFinal;

    printf("Digite o salario atual");
    scanf("%f", &salarioAtual); 

    printf("Digite a porcetagem de reajuste");
    scanf("%f", &porcentagemReajuste); 

    reajusteFinal = porcentagemReajuste/100;

    //calcular o nobo salario

    novoSalario = (salarioAtual * reajusteFinal) + salarioAtual;

    printf("Novo salario: R$%.2f", novoSalario);

}