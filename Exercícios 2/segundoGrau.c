#include <stdio.h>
#include <math.h>

int main() {

    int a = 0;
    int b = 0;
    int c = 0;

    printf("O seguinte programa calcula as raízes de uma equação do segundo grau!\n\n");
    printf("Digite o coeficiente 'a', 'b' e 'c', respectivamente:\n");
    scanf("%d%d%d", &a,&b,&c);
    
    int delta = pow(b,2) - (4 * a * c );
    if (delta < 0) {
        printf("Não existe raíz real para delta menor que zero\n");
    } 
    else if(delta > 0) {
        float x = (-b + sqrt(delta)) / (2 * a);
        float y = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes de x' e x'' são, respectivamente, %.2f e %.2f\n", x, y );
    }
    else {
        double x = (-b + sqrt(delta)) / (2 * a);
        printf("As raízes de x' e x'' são iguais, logo x equivale a %.2f\n", x);
    }
    
}