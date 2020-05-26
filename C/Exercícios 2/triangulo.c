#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Digite os valores dos lados candidatos para ser um triângulo: \n");
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d%d%d", &a, &b, &c);
    int soma1 = a + b;
    int soma2 = b + c;
    int soma3 = a + c;
    //| b - c | < a < b + c
    //| a - c | < b < a + c
    //| a - b | < c < a + b
    if ((abs(b - c) < a || a < (b + c))){
        if ((a == b) && (a == c)) {
            printf("É um triângulo equilátero\n");
        }
        else if(a == b || b == c || a == c) {
            if((a * a) == (b*b) + (c*c)){
                printf("É um triângulo isósceles e retângulo.\n");
            }else
            {
                printf("É um triângulo isósceles e não retângulo.\n");

            }
        }else {
            if((a * a) == (b*b) + (c*c)){
                printf("É um triângulo escaleno e retângulo.\n");
            }else
            {
                printf("É um triângulo escaleno e não retângulo.\n");

            }
        }
    }else
    {
        printf("Não é um triângulo\n");
    }
    
}