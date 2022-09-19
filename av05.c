#include <stdio.h>

void main()
{
    int matriz[7][3], num, i, j;

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nDigite um número para inserir na posição [%d][%d]:", i, j);
            scanf("%d", &num);
            matriz[i][j] = num;
        }
    }

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 3; j++) {
            printf ("\nElemento[%d][%d] = %d\n", i, j,matriz[ i ][ j ]);
        }
    }
    
}
