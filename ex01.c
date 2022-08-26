# include<stdio.h> /* Biblioteca para usar o printf() */

void main()
{
    double Mi; /* constante gravitacional */
    float constante;

    Mi = 3.9860005e+14;
    constante = 3.0e-1;

    /* Imprime na tela o conteúdo de Mi com expressão %e (minúsculo) */
    printf("Constante gravitacional: %e \n", Mi);

    /* Imprime na tela o conteúdo de Mi com expressão %E (maiúsculo) */
    printf("Constante gravitacional: %E \n", Mi);

    /* Imprime na tela o conteúdo de Mi com expressão %g */
    printf("Constante gravitacional: %g \n", Mi);

    /* Imprime na tela o conteúdo de constante com expressão %e (minúsculo) */
    printf("Constante gravitacional: %e \n", constante);

    /* Imprime na tela o conteúdo de constante com expressão %E (maiúsculo) */
    printf("Constante gravitacional: %E \n", constante);
}
