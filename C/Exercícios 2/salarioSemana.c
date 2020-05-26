#include <stdio.h>

int main() {
    float vendas = 0;
    float salario = 0;
    
    printf("Digite o valor de vendas em reais: ");
    scanf("%f", &vendas);
    
    salario = 200 + (vendas * 0.09);
    printf("\nO salário da semana é: R$ %.2f\n", salario);
}