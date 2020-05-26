#include <stdio.h>

int main() {
    printf("Digite um número com cinco algarismo e irei separar cada algarismo e fazer a soma entre eles: \n");
    int numero = 0;
    int soma = 0;
    scanf("%d", &numero);
    int decremento = 10000;
    for(int i = 0; i < 5; i++){
        int algarismo = numero / decremento; 
        printf("%d   ", algarismo);
        soma += algarismo;
        numero = numero % decremento;
        decremento = decremento / 10;
    }
    printf("\nA soma entre os algarimos é %d\n", soma);
}