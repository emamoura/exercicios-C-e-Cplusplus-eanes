#include <stdio.h>

int main() {
    int numero = 0;
    
    printf("Digite o número que você deseja saber o seu mínimo divisor próprio:\n");
    scanf("%d", &numero);
    int i = 2;
    int booleano = 0;
    while (i < numero){
        if(numero % i == 0){
           booleano = 1;
           break;
       }
       i += 1;    
       }
    if(booleano == 1){
        printf("O menor divisor próprio de %d é %d\n",numero, i);
    }
    else{
        printf("Não possui menor divisor próprio\n");
    }
}