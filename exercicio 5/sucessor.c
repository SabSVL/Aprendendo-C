#include <stdio.h>
#include <locale.h>


main()
{
    int a, ant, suc;
    printf("Digite um numero: ");
    scanf("%i",&a);

    ant = a - 1;
    suc = a + 1;
    printf("\n Antecessor: %i",ant);
    printf("\n Sucessor: %i\n",suc);
}
