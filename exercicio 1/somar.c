#include <stdio.h>
#include <locale.h>

main()
{
    int a, b, c;

    setlocale(LC_ALL,"");
    printf("Digite o primeiro numero: ");
    scanf("%i",&a);
    printf("Digite o segundo numero: ");
    scanf("%i",&b);
    c = a + b;
    printf("\nA soma é: %i", c);



}
