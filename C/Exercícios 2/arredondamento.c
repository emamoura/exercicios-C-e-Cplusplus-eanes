#include <stdio.h>
#include <math.h>

int main() {
    float numero = 0;

    printf("Digite um número qualquer e irei arrendodar o mesmo: ");
    scanf("%f", &numero);
    numero = round(numero);
    printf("\n%.2f\n", numero);
}