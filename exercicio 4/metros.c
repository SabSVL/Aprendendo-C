#include <stdio.h>
#include <locale.h>

main()
{
    float metros, decimetros, centimetros, milimetros;
    setlocale(LC_ALL,"");

    printf(" Digite um valor em metros: ");
    scanf("%f",&metros);

    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;

    printf("\n Dec�metros: %2.f", decimetros);
    printf("\n Cent�metros: %2.f", centimetros);
    printf("\n Mil�metros: %2.f\n", milimetros);
}
