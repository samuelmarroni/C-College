# include<stdio.h>

void main()
{
    int grausF;
    float grausC;

    printf("\nDigite os graus em Fahrenheit:");
    scanf("%d", &grausF);

    grausC = ((grausF - 32) / 9) * 5;

    printf("%.2f°C", grausC);
}
