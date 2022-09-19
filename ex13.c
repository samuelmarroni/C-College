# include<stdio.h>

void main()
{
    int numero, soma;

    soma = 0;
    while (1) {
        printf("Digite um numero:");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        soma = soma + numero;
    }

    printf("\nSoma e %d", soma);
}