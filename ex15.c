# include<stdio.h>

void main()
{
    int codigo, quantidade;
    float valor;

    do {
        printf("\nDigite o codigo do produto:");
        scanf("%d", &codigo);

        if (codigo > 106 || codigo < 100){
            break;
        }

        printf("\nDigite a quantidade do produto:");
        scanf("%d", &quantidade);

        valor = 0;
        if (codigo == 100) {
            valor = quantidade * 1.20;
            printf("%d Cachorros Quentes sao > %.2f", quantidade, valor);
        }
        else if (codigo == 101) {
            valor = quantidade * 1.30;
            printf("%d Bauru Simples sao > %.2f", quantidade, valor);
        }
        else if (codigo == 102) {
            valor = quantidade * 1.50;
            printf("%d Bauro com Ovo sao > %.2f", quantidade, valor);
        }
        else if (codigo == 103) {
            valor = quantidade * 1.20;
            printf("%d Hamburguer sao > %.2f", quantidade, valor);
        }
        else if (codigo == 104) {
            valor = quantidade * 1.70;
            printf("%d Cheeseburguer sao > %.2f", quantidade, valor);
        }
        else if (codigo == 105) {
            valor = quantidade * 2.20;
            printf("%d Suco sao > %.2f", quantidade, valor);
        }
        else if (codigo == 106) {
            valor = quantidade * 1.00;
            printf("%d Refrigerante sao > %.2f", quantidade, valor);
        }
    } while (1);

    printf("Compra finalizada");
}