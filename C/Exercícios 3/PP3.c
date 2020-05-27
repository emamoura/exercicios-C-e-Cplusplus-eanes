#include <stdio.h>

int main() {
    int cateto, cateto2, hipotenusa;
    for(hipotenusa = 1; hipotenusa < 500; hipotenusa ++){
        for(cateto = 1; cateto < 500; cateto ++){
            for(cateto2 = 1; cateto2 < 500; cateto2++){
                int esquerdo = cateto * cateto + cateto2 * cateto2;
                int direito = hipotenusa * hipotenusa;

                if(esquerdo == direito){
                    printf("O triângulo possui os seguintes lados: %d - %d - %d\n", hipotenusa, cateto, cateto2);
                } else if (esquerdo > direito)
                {
                    break;
                }
                
            }
        }
    }

    return 0;
}