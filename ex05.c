# include<stdio.h>

void main()
{
    int d, h, m, s, totalSeg;

    printf("\nDigite os dias:");
    scanf("%d", &d);

    printf("\nDigite as horas:");
    scanf("%d", &h);

    printf("\nDigite os minutos:");
    scanf("%d", &m);

    printf("\nDigite os segundos:");
    scanf("%d", &s);

    totalSeg = s + (m*60) + ((h*60)*60) + (((d*24)*60)*60);
    printf("Total de segundos: %d", totalSeg);
}
