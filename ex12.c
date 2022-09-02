# include<stdio.h>

void main()
{
    int aulas, faltas;
    float n1, n2;

    printf("\nDigite a primeira nota:");
    scanf("%f", &n1);

    printf("\nDigite a segunda nota:");
    scanf("%f", &n2);

    printf("\nDigite o total de aulas:");
    scanf("%d", &aulas);

    printf("\nDigite o total de faltas:");
    scanf("%d", &faltas);

    if ((n1+n2)/ 2 >= 7 && ((aulas - faltas) * 100) / aulas >= 75) {
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }
}
