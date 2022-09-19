# include<stdio.h>

void main()
{
    int v1, v2, v3;
    float media;

    printf("\nDigite o primeiro valor:");
    scanf("%d", &v1);

    printf("\nDigite o segundo valor:");
    scanf("%d", &v2);

    printf("\nDigite o terceiro valor:");
    scanf("%d", &v3);

    media = (v1 + v2 + v3) / 3;

    printf("A média é %.2f", media);
}
