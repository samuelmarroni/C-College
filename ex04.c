# include<stdio.h>

void main()
{
    int a, b, c;

    printf("\nDigite um numero:");
    scanf("%d", &a);

    printf("\nDigite um numero:");
    scanf("%d", &b);

    c = b;
    b = a;
    a = c;

    printf("%d, %d", a, b);
}