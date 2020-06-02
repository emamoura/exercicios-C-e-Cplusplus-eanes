#include <stdio.h>
#define LIMITE 25
 
int main(void)
{
    int m, n, p, i, j, k,
     m1[LIMITE][LIMITE], m2[LIMITE][LIMITE], m3[LIMITE][LIMITE];
     scanf("%d", &m);
     scanf("%d", &n);
     scanf("%d", &p);
     if (m < LIMITE && n < LIMITE && p < LIMITE)
     {
         for (i = 0; i < m; i = i + 1)
             for (j = 0; j < n; j = j + 1) scanf("%d", &m1[i][j]);
         for (i = 0; i < n; i = i + 1)
             for (j = 0; j < p; j = j + 1) scanf("%d", &m2[i][j]);
         printf("\n");
         for (i = 0; i < m; i = i + 1)
         {
             for (j = 0; j < p; j = j + 1)
             {
                 m3[i][j] = 0;
                 for (k = 0; k < n; k = k + 1)
                     m3[i][j] = m3[i][j] + m1[i][k] * m2[k][j];
                 printf("%3d", m3[i][j]);
           }
             putchar('\n');
       }
     }
     else printf("Matriz excessivamente grande!\n");
     return 0;
 }