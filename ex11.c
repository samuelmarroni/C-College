# include<stdio.h>

void main()
{
    int a;

    printf("\nInforme a idade:");
    scanf("%d", &a);

    if (a < 5) {
        printf("Idade invalida");
    }
    if (a >= 5 && a <= 7){
        printf("Infantil A");
    }
    if (a >= 8 && a <= 11){
        printf("Infantil B");
    }
    if (a >= 12 && a <= 13){
        printf("Juvenil A");
    }
    if (a >= 14 && a <= 17){
        printf("Juvenil B");
    }
    if (a >= 18){
        printf("Adultos");
    }
}
