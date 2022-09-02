# include<stdio.h>

void main()
{
    int v1, v2, quadrado;

    printf("\nDigite o primeiro valor:");
    scanf("%d", &v1);

    printf("\nDigite o segundo valor:");
    scanf("%d", &v2);

    v1 = v1 * v1;
    v2 = v2 * v2;

    quadrado = v1 + v2;

    printf("Quadrado do primeiro valor: %d \nQuadrado do segundo valor: %d \nSoma dos dois: %d", v1, v2, quadrado);
}
