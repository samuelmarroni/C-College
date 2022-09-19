# include<stdio.h>

void main()
{
    int vetorA[10], vetorB[10], num, i;

    printf("\nDigite um número para somar no vetor B:");
    scanf("%d", &num);

    for (i = 0; i < 10; i++)
    {
        printf("\nDigite um número para o vetor A:");
        scanf("%d", &vetorA[i]);

        vetorB[i] = num + vetorA[i];
    }
    
    for (i = 0; i < 10; i++) {
        printf("Vetor A posicao %d: %d\n", i, vetorA[i]);
        printf("Vetor B posicao %d: %d\n", i, vetorB[i]);
    }
    
}
