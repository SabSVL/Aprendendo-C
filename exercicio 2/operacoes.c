#include <stdio.h>
#include <locale.h>

main()
{
    int a,b, soma, multi, subt;
    float divisao;
    setlocale (LC_ALL,"");
    printf("Digite o primeiro numero: ");
    scanf("%i",&a);
    printf("Digite o segundo numero: ");
    scanf("%i",&b);

    soma = a + b;
    subt = a - b;
    divisao = a / b;
    multi = a * b;

    printf("\nSoma: %i",soma);
    printf("\nSubtra��o: %i ", subt);
    printf("\nDivis�o: %2.f", divisao);
    printf("\nMultiplica��o: %i", multi);

}
