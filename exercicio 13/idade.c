#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    int joana, pedro;

    do
    {
        printf("Digite sua idade Pedro: ");
        scanf("%i",&pedro);
    }
    while(pedro<1);
    do
    {
        printf("Digite sua idade Joana: ");
        scanf("%i",&joana);
    }
    while(joana<1);

    if(joana>pedro)
    {
        printf("\n Joana é a mais velha\n");
    }
    else if(pedro>joana)
    {
        printf("\n Pedro é o mais velho\n");
    }
    else
    {
        printf("\n Possuem a mesma idade\n");
    }
}
