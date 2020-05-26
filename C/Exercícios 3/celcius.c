#include <stdio.h>

int main() {
    for(int i = 30; i <= 50; i++) {
        float f = i * 1.8 + 32;
        printf("%.2f\n", f);
    }
}