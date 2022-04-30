#include <stdio.h>
main()
{
    int a, b;
    printf("Digite o primeiro valor: ");
    scanf("%i",&a);

    printf("Digite o segundo valor: ");
    scanf("%i",&b);


    a = a + b;
    b = a - b;
    a = a - b;

    printf("\na = %i\nb = %i\n",a,b);
}
