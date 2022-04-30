#include <stdio.h>
#include <locale.h>

main()
{
    float real, euro, dolar, iene, libra, peso;
    int op; //opção

    setlocale(LC_ALL,"");
    printf("Digite o valor em real: ");
    scanf("%f",&real);

    printf("\nConverter para:");
    printf("\n(1)- Dolar Americano \n(2)- Euro \n(3)- Iene Japones \n(4)- Libra Esterlina \n(5)- Peso Argentino");
    printf("\nEscolha: ");
    scanf("%i",&op);

    switch(op)
    {
    case 1:
        dolar = real * 0.20;
        printf("\nReal para Dolar: %.2f\n", dolar);
        break;

    case 2:
        euro = real * 0.19;
        printf("\nReal para Euro: %.2f\n", euro);
        break;

   case 3:
       iene = real * 26.10;
       printf("\nReal para Iene Japones: %.2f\n", iene);
       break;

   case 4:
        libra = real * 0.16;
        printf("\nReal para Libra Esterlina: %.2f\n", libra);
        break;

   case 5:
        peso = real * 23.19;
        printf("\nReal para Peso Argentino: %.2f\n", peso);
        break;

        default:
        printf("\nOpção invalida!\n");
        break;

    }

}
