# include<stdio.h>

void main()
{
    int a, b;

    printf("\nDigite o primeiro valor:");
    scanf("%d", &a);

    printf("\nDigite o segundo valor:");
    scanf("%d", &b);

    if (a > b) {
        printf("\n %d\n %d", b, a);
    } else {
        printf("\n %d\n %d", a, b);
    }
}
