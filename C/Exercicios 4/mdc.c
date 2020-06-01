#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 = 0;

    printf("Digite dois números naturais, sendo o primeiro maior e o segundo o menor: \n");

    scanf("%d%d", &num1, &num2);
    int resto = num1;
    int saida;
    while (resto > 0) {
        resto = num1 % num2;
        if(resto == 0){
            saida = num2;
        }
        num1 = num2;
        num2 = resto;
    }

    printf("O MDC é igual %d\n", saida);



}