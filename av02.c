# include<stdio.h>

void main()
{
    int metros, milimetros;

    printf("\nDigite o valor de metros:");
    scanf("%d", &metros);

    milimetros = metros * 1000;

    printf("%d Milimetros", milimetros);
}
