#include <stdio.h>
#include <locale.h>


main()
{
    float litro, desc, total1, total2;
    char tipo;
    setlocale(LC_ALL, "");
    do
    {
        printf("Digite a quantidade de litros vendidos: ");
        scanf("%f",&litro);
    }
    while(litro<0);

    getchar();
    printf("Escolha o tipo de combustivel: (A) Alcool ou (G) Gasolina: ");
    scanf("%c",&tipo);
    switch (tipo)
    {
    case 'A':
    {
        if(litro>20)
        {
            total1 = 4.18 * litro;
            desc = total1 * 0.05;
            total2 = total1 - desc;
        }
        else
        {
            total1 = 4.18 * litro;
            desc = total1 * 0.03;
            total2 = total1 - desc;
        }
        printf("\nO valor do litro com desconto é: R$%.2f\n", total2);
        break;
    }
    case 'G':
    {
        if(litro>20)
        {
            total1 = 5.88 * litro;
            desc = total1 * 0.06;
            total2 = total1 - desc;

        }
        else
        {
            total1 = 5.88 * litro;
            desc = total1 * 0.04;
            total2 = total1 - desc;
        }

        printf("\nO valor do litro com desconto é: R$%.2f\n", total2);
        break;
    }
    default:
        printf("\nOpção invalida!\n");
        break;
    }
}
