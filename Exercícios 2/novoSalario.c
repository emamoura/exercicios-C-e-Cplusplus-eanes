#include <stdio.h>
#include <math.h>

int main() {
    double salario = 0;
    double salarioNovo = 0;
    printf("Programa que calcula o aumento de um funcionário de acordo com o seu salário.\n");
    printf("Digite o salário do colaborador:\n");
    scanf("%lf", &salario);
    if(salario <= 2000){
        salarioNovo = (salario * 0.13) + salario;
        printf("Seu antigo salário era %.2lf, agora seu salário teve um reajuste. Seu salário atual é %.2lf\n", salario, salarioNovo);
    }
    else if(salario <= 4000){
        salarioNovo = (salario * 0.11) + salario;
        printf("Seu antigo salário era %.2lf, agora seu salário teve um reajuste. Seu salário atual é %.2lf\n", salario, salarioNovo);
    }
    else if(salario <= 8000){
        salarioNovo = (salario * 0.09) + salario;
        printf("Seu antigo salário era %.2lf, agora seu salário teve um reajuste. Seu salário atual é %.2lf\n", salario, salarioNovo);
    }
    else{
        salarioNovo = (salario * 0.07) + salario;
        printf("Seu antigo salário era %.2lf, agora seu salário teve um reajuste. Seu salário atual é %.2lf\n", salario, salarioNovo);
    }
    
}