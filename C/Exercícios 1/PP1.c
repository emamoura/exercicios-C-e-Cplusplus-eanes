#include <stdio.h>

int main() {

    float pesoEmKg = 0;
    float alturaEmMetros = 0;

    printf("Calculadora de Massa Corporal (BMI - Body Mass Index)\n\n");
    printf("Por favor, digite seu peso (em Kg): \n");
    scanf("%f", &pesoEmKg);
    printf("Por favor, digite sua altura (em metros): \n");
    scanf("%f", &alturaEmMetros);

    float resultado = pesoEmKg / (alturaEmMetros * alturaEmMetros);

    printf("\nSeu BMI é: %.1f\n", resultado);
    if (resultado < 18.5) {
        printf("Você está abaixo do peso!\n");
    } else if (resultado < 24.9){
        printf("Você está com peso normal!\n");
    } else if (resultado < 29.9) {
        printf("Você está acima do peso!\n");
    } else {
        printf("Você está obeso\n");
    }

    return 0;

}