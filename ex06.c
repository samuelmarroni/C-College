# include<stdio.h>

void main()
{
    float salario, porcentual, total;

    printf("\nDigite o salário atual:");
    scanf("%f", &salario);

    printf("\nDigite o porcentual:");
    scanf("%f", &porcentual);

    total = salario + (salario * (porcentual/100));
    printf("Salário total: %.2f", total);
}
