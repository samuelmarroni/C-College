# include<stdio.h>

void main()
{
    int numero, contador, mult;

    printf("Digite um numero para realizar a tabuada:");
    scanf("%d", &numero);

    contador = 1;
    while (contador <= 10) {
        mult = numero * contador;
        printf("\n%d * %d = %d", numero, contador, mult);

        contador += 1;
    }
}