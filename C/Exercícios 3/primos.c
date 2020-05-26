#include <stdio.h>

int ePrimo (int numero) {
    int contador = 0;
    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){
        contador += 1;
        }   
    }
    if(contador == 2){
        return numero;
    } 
}


int main() {
    for(int i = 1; i <= 100; i ++){
        if(ePrimo(i) == i){
            printf("%d\n", i);
        }
    }     
}