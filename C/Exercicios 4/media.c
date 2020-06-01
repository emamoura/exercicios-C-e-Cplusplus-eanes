#include <stdio.h>

int main(){
    printf("Calcule a média de n números\n");
    
    int numero = 0;
    scanf("%d", &numero);
    float soma = 0;
    int divisor = 0;

    for(int i = 1; i <= numero; i++){
        soma += i;
        divisor++;
    }

    float media = soma / divisor;

    printf("A media é igual a %f\n", media);
}