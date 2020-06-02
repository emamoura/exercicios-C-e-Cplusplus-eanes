#include <stdio.h>

int main() {
    printf("Digite a quantidade de termos: ");
    int quantidadeTermos = 0;
    scanf("%d", &quantidadeTermos);
    
    int termoNumerador = 4;
    int termoDenominador = 1;
    double numerador[100000] = {};
    double denominador[100000] = {};
    double soma = 0;

    for(int i = 0; i < quantidadeTermos; i++){
        if(i % 2 != 0){
            numerador[i] = -(termoNumerador);
        }else{
            numerador[i] = termoNumerador;
        }   
    }

    for(int i = 0; i < quantidadeTermos; i++){
        denominador[i] = termoDenominador;
        termoDenominador += 2; 
    }

    for(int i = 0; i < quantidadeTermos; i++){
        printf("%f/%f\n", numerador[i], denominador[i]);
        soma += (numerador[i] / denominador[i]);
    }

    printf("%f\n", soma);
}