# include<stdio.h>

void main()
{
    int v1, v2;

    printf("\nDigite o primeiro valor:");
    scanf("%d", &v1);

    printf("\nDigite o segundo valor:");
    scanf("%d", &v2);

    v1 = v1 * 2;
    v2 = v2 * 2;

    printf("Dobro do primeiro valor: %d \nDobro do segundo valor: %d", v1, v2);
}
