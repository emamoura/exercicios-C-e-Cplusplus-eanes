#include <stdio.h>

int main(){
    printf("O seguinte programa mostra qual o mês do ano que você digitou e quantidade de dias do mesmo.\n");
    
    int mes = 0;
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        printf("Janeiro - 31 dias\n");
        break;
    case 2:
        printf("Fevereiro - 28 dias\n");
        break;
    case 3:
        printf("Março - 31 dias\n");
        break;
    case 4:
        printf("Abril - 30 dias\n");
        break;
    case 5:
        printf("Maio - 31 dias\n");
        break;
    case 6:
        printf("Junho - 30 dias\n");
        break;
    case 7:
        printf("Julho - 31 dias\n");
        break;
    case 8:
        printf("Agosto - 31 dias\n");
        break;
    case 9:
        printf("Setembro - 30 dias\n");
        break;
    case 10:
        printf("Outubro - 31 dias\n");
        break;
    case 11:
        printf("Novembro - 30 dias\n");
        break;
    case 12:
        printf("Dezembro - 31 dias\n");
        break;        
    default:
        printf("O valor digitado não corresponde a nenhum mês\n");
        break;
    }
}
