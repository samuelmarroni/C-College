# include<stdio.h>

void main()
{
    int distancia;
    float preco, desempenho, precoTotal, litros;

    printf("\nDigite o preço do litro atual:");
    scanf("%f", &preco); //3

    printf("\nDigite o desempenho do veículo:");
    scanf("%f", &desempenho); //40km/l 

    printf("\nDigite a distância entre duas cidades(km):");
    scanf("%f", &distancia); //50km

    litros = distancia / desempenho;
    precoTotal = litros * preco;

    printf("Total de litros: %.2f \nTotal gasto: %.2f", litros, precoTotal);
}
