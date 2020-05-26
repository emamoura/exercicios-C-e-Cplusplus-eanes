#include <stdio.h>

int main() {
    
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Digite três números inteiros diferentes: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    int soma = num1 + num2 + num3;
    int media = soma / 3;
    int produto = num1 * num2 * num3;

    printf("A soma é %d\n", soma);
    printf("A media é %d\n", media);
    printf("O produto é %d\n", produto);

    if(num1 < num2 && num1 < num3) {
        printf("O menor é %d\n", num1 );
        if(num2 > num3) {
            printf("O maior é %d\n", num2);
        }else {
            printf("O maior é %d\n", num3);
        }
    } else if( num2 < num1 && num2 < num3) {
        printf("O menor é %d\n", num2);
            if(num3 > num1) {
            printf("O maior é %d\n", num3);
        }   else {
            printf("O maior é %d\n", num1);
        }
    } else if(num3 < num2 && num3 < num1 ) {
        printf("O menor é %d\n", num3);
        if(num1 > num2) {
            printf("O maior é %d\n", num1);
        }else {
            printf("O maior é %d\n", num2);
        }
    }

    return 0;
}
