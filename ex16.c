# include<stdio.h>

void main()
{
    int total, num, i;

    printf("\nDigite um número para realizar a tabuada:");
    scanf("%d", &num);

    for (i = 0; i <= 10; i++)
    {
        total = num * i;
        printf("\n%d * %d = %d", num, i, total);
    }
    
}
