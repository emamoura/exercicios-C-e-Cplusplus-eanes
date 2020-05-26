#include <stdio.h>

int main() {
    printf("Digite dois números inteiros, sendo o primeiro o maior e o segundo o menor: \n");
    int a = 0;
    int b = 0;
    scanf("%d%d", &a,&b);
    int quociente = a / b;
    int resto =  a - (quociente  * b);
    printf("O quociente é %d e o resto é %d\n", quociente, resto);

}