#include <stdio.h>

int main() {
    
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    int produto = num1 * num2 * num3;

    printf("%d\n" , produto);

    return 0;
}
