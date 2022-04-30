#include <stdio.h>

main()
{
    int valor, a, b, c, d;

    printf("Digite um numero: ");
    scanf("%i",&valor);

    a = valor/1000;
    b = (valor%1000)/100;
    c = ((valor%1000)%100)/10;
    d = ((valor%1000)%100)%10;
    printf("\n P: %i \n S: %i \n T: %i \n Q: %i\n",a,b,c,d);

}
