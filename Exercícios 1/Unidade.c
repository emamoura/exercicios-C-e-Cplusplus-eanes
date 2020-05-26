#include <stdio.h>

int main(){
    
    int num1 = 0;

    printf("Digite um inteiro: ");
    scanf("%d", &num1);

    int unidade = num1 % 10;

    printf("O algarismo da casa das unidades é: %d\n", unidade);
    
    return 0;
}
