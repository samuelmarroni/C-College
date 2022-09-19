#include <stdio.h>

void main()
{
    int i;

    i = 1;
    while (i <= 100)
    {
        printf("%d ", i);

        i += 1;
    }
    printf("\n");
    printf("======================================================================");
    printf("\n");
    
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0){
            printf("%d ", i);
        }
    }

    printf("\n");
    printf("======================================================================");
    printf("\n");

    i = 1;
    do
    {
        if (i % 2 != 0){
            printf("%d ", i);
        }

        i += 1;
    } while (i <= 100);
    
}
