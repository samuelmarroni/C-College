# include<stdio.h> /* Biblioteca para usar o printf() e o scanf() */

void main()
{
    char nome[30];
    int idade;

    printf("Digite seu nome:");
    scanf("%[^\n]", &nome);

    printf("\nDigite a sua idade:");
    scanf("%d", &idade);

    printf("\n %s tem %d anos!", nome, idade);
}
