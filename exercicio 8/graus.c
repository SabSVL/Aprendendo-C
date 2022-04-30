#include <stdio.h>
#include <locale.h>


main()
{
    float c, k, f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f",&c);

    f = c*(9/5)+32;
    k = c + 273.15;

    printf("\nCelsius para Fahrenheit: %.2f",f);
    printf("\nCelsius para Kelvin: %.2f\n",k);
}
