#include <stdio.h>

int main() {
    int n = 0;
    
    printf("Digite um valor, e irei mostrar a soma entre os n primeiros termos ímpares e os númeors ímpares:\n");
    scanf("%d", &n);
    int soma = 0;
    for(int i = 0; i < n ; i++) {
        printf("%d ", (2 * i) + 1);
        soma += ((2* i) + 1);
    }
    printf("\nA soma é igual a %d\n", soma);
}