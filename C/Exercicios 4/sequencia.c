#include <stdio.h>

int main(){
    printf("Digite a quantidade de termos: ");
    int quantidadeTermos = 0;
    scanf("%d", &quantidadeTermos);
    
    int termoNumerador = 1;
    int termoDenominador = 2;
    double numerador[1000] = {};
    double denominador[1000] = {};
    double soma = 0;

    for(int i = 0; i < quantidadeTermos; i++){
        numerador[i] = termoNumerador;
        termoNumerador += 2; 
    }

    for(int i = 0; i < quantidadeTermos; i++){
        denominador[i] = termoDenominador;
        termoDenominador += 3; 
    }

    for(int i = 0; i < quantidadeTermos; i++){
        printf("%f/%f\n", numerador[i], denominador[i]);
        soma += (numerador[i] / denominador[i]);
    }

    printf("%f\n", soma);

}